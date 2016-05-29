library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_ARITH.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;
use IEEE.numeric_std.ALL; 
ENTITY system_test IS
END system_test; 
ARCHITECTURE behavior OF system_test IS 
    -- Component Declaration for the Unit Under Test (UUT)
    COMPONENT system
    PORT(
         clk : IN  std_logic;
         reset : IN  std_logic;
         spi_miso : IN  std_logic;
         f : IN  std_logic_vector(3 downto 0);
         spi_mosi : OUT  std_logic;
         dac_cs : OUT  std_logic;
         spi_sck : OUT  std_logic;
         dac_clr : OUT  std_logic;
         spi_ss_b : OUT  std_logic;
         amp_cs : OUT  std_logic;
         sf_ce0 : OUT  std_logic;
         fpga_init_b : OUT  std_logic;
         ad_conv : OUT  std_logic
        );
    END COMPONENT;
   --Inputs
   signal clk : std_logic := '0';
   signal reset : std_logic := '0';
   signal spi_miso : std_logic := '0';
   signal f : std_logic_vector(3 downto 0) := (others => '0');
 	--Outputs
   signal spi_mosi : std_logic;
   signal dac_cs : std_logic;
   signal spi_sck : std_logic;
   signal dac_clr : std_logic;
   signal spi_ss_b : std_logic;
   signal amp_cs : std_logic;
   signal sf_ce0 : std_logic;
   signal fpga_init_b : std_logic;
   signal ad_conv : std_logic;
   -- Clock period definitions
   constant clk_period : time := 20 ns;
BEGIN 
	-- Instantiate the Unit Under Test (UUT)
   uut: system PORT MAP (
          clk => clk,
          reset => reset,
          spi_miso => spi_miso,
          f => f,
          spi_mosi => spi_mosi,
          dac_cs => dac_cs,
          spi_sck => spi_sck,
          dac_clr => dac_clr,
          spi_ss_b => spi_ss_b,
          amp_cs => amp_cs,
          sf_ce0 => sf_ce0,
          fpga_init_b => fpga_init_b,
          ad_conv => ad_conv
        );
   -- Clock process definitions
   clk_process :process
   begin
		clk <= '0';
		wait for clk_period/2;
		clk <= '1';
		wait for clk_period/2;
   end process;
   -- Stimulus process
   stim_proc: process
   begin		
      -- hold reset state for 100 ns.
      wait for 100 ns;	
		f <= "0001";
		wait for 100 ns;
		f <= "1010";
		wait for 100 ns;
		f <= "1101";
      wait;
   end process;
END;
