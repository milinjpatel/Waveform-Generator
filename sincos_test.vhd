library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_ARITH.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;
use IEEE.numeric_std.ALL;
ENTITY sincos_test IS
END sincos_test;
ARCHITECTURE behavior OF sincos_test IS 
  COMPONENT sin_cos_generator
    PORT(
         f : IN  std_logic_vector(3 downto 0);
         clk : IN  std_logic;
         Tsincos : OUT  std_logic;
         sin_amp : OUT  std_logic_vector(11 downto 0);
         cos_amp : OUT  std_logic_vector(11 downto 0)
        );
    END COMPONENT;   
   --Inputs
   signal f : std_logic_vector(3 downto 0) := (others => '0');
   signal clk : std_logic := '0';
 	--Outputs
   signal Tsincos : std_logic;
   signal sin_amp : std_logic_vector(11 downto 0);
   signal cos_amp : std_logic_vector(11 downto 0);
   constant clk_period : time := 20 ns;
BEGIN
   uut: sin_cos_generator PORT MAP (
          f => f,
          clk => clk,
          Tsincos => Tsincos,
          sin_amp => sin_amp,
          cos_amp => cos_amp
        );
   clk_process :process
   begin
		clk <= '0';
		wait for clk_period/2;
		clk <= '1';
		wait for clk_period/2;
   end process;
   stim_proc: process
   begin		
      wait for 100 ns;
		f <= "0000";
		wait for 20 ns;
		f <= "0001";
		wait for 20 ns;
		f <= "0101";
      wait;
   end process;
END;
