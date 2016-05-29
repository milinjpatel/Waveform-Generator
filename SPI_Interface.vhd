library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_ARITH.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;
use IEEE.numeric_std.ALL;

entity SPI_Interface is
	port(clk, go_dac, SPI_MISO, reset: in std_logic;
		  datain_dac: in std_logic_vector(11 downto 0); 
		  address_dac: in std_logic_vector(3 downto 0);
		  transmitting, SPI_MOSI, dac_clr: out std_logic;
		  spi_sck: out std_logic:='0';
		  dac_cs: out std_logic:='1');
end SPI_Interface;
architecture Behavioral of SPI_Interface is
	type state_type is (S0, S1, S2);
	signal state: state_type;
	signal R: std_logic_vector(31 downto 0);
	signal bitcounter: std_logic_vector(4 downto 0);
	signal flag: std_logic;
begin process(reset, clk) begin
	if (reset = '1') then state <= S0;
	elsif (clk'event and clk = '1') then
	case state is
		when S0 => if (go_dac = '1' or flag = '1') then transmitting <= '1'; dac_cs <= '0'; 
					  bitcounter <= "11111"; flag <= '0';
					  R <= (31 downto 22 => '0')&(21 downto 20 => '1')&address_dac&datain_dac&(3 downto 0 => '0');
					  state <= S1; end if;
		when S1 => state <= S2;
		when S2 => if (bitcounter = "00000") then transmitting <= '0'; dac_cs <= '1'; state <= S0;
					  elsif (go_dac = '1') then flag <= '1';
					  R <= R(30 downto 0) & '0'; bitcounter <= bitcounter - 1; state <= S2;
					  else R <= R(30 downto 0) & '0'; bitcounter <= bitcounter - 1; state <= S2; end if;
	end case; end if; end process;
	SPI_MOSI <= R(31); dac_clr <= not reset; 
	with state select 
		spi_sck <= not clk when S2,
					  '0' when others;
end Behavioral;

