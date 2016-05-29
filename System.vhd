library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_ARITH.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;
use IEEE.numeric_std.ALL;

entity system is
	port(clk, reset, spi_miso: in std_logic;
		  f: in std_logic_vector(3 downto 0);
		  spi_mosi, dac_cs, spi_sck, dac_clr: out std_logic; 
		  spi_ss_b, amp_cs, sf_ce0, fpga_init_b: out std_logic:=('1');
		  ad_conv: out std_logic:=('0'));
		  
end system;

architecture Behavioral of system is
	signal transmitting, go_dac: std_logic;
	signal address_dac: std_logic_vector(3 downto 0);
	signal dswt, dtr: std_logic_vector(7 downto 0);
	signal datain_dac, sin_amp, cos_amp: std_logic_vector(11 downto 0);
	signal tswt, ttr, Tsincos: std_logic;
	component Controller is
		port(clk, tswt, transmitting, reset, ttr, Tsincos: in std_logic;
			  dswt, dtr: in std_logic_vector(7 downto 0);
			  sin_amp, cos_amp: in std_logic_vector(11 downto 0);
			  go_dac: out std_logic;
			  address_dac: out std_logic_vector(3 downto 0);
			  datain_dac: out std_logic_vector(11 downto 0));	  
	end component;
	component SPI_Interface is
		port(clk, go_dac, SPI_MISO, reset: in std_logic;
			  datain_dac: in std_logic_vector(11 downto 0); 
			  address_dac: in std_logic_vector(3 downto 0);
			  transmitting, SPI_MOSI, dac_cs, spi_sck, dac_clr: out std_logic);
	end component;
	component counter_circuit is
		port(clk: in std_logic;
			  f: in std_logic_vector(3 downto 0);
			  tswt, ttr: out std_logic;
			  dswt, dtr: out std_logic_vector(7 downto 0));
	end component;
	component sin_cos_generator is
		port(f: in std_logic_vector(3 downto 0);
			  clk: in std_logic;
			  Tsincos: out std_logic;
			  sin_amp, cos_amp: out std_logic_vector(11 downto 0));
	end component;
begin
	CC: counter_circuit port map(clk, f, tswt, ttr, dswt, dtr);
	SCGEN: sin_cos_generator port map(f, clk, Tsincos, sin_amp, cos_amp);
	C: Controller port map(clk, tswt, transmitting, reset, ttr, Tsincos, dswt, dtr, sin_amp, cos_amp, 
								  go_dac, address_dac, datain_dac);
	S: SPI_Interface port map(clk, go_dac, spi_miso, reset, datain_dac, address_dac, 
									  transmitting, SPI_MOSI, dac_cs, spi_sck, dac_clr);
	spi_ss_b <= '1'; amp_cs <= '1'; sf_ce0 <= '1'; fpga_init_b <= '1';
	ad_conv <= '0';
end Behavioral;

