library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_ARITH.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;
use IEEE.numeric_std.ALL;
ENTITY rom_test IS
END rom_test;
ARCHITECTURE behavior OF rom_test IS 
    COMPONENT ROM_address
    PORT(
         sample_spot : IN  std_logic_vector(5 downto 0);
         sample : OUT  std_logic_vector(11 downto 0)
        );
    END COMPONENT;   
   --Inputs
   signal sample_spot : std_logic_vector(5 downto 0) := (others => '0');
 	--Outputs
   signal sample : std_logic_vector(11 downto 0);
BEGIN
   uut: ROM_address PORT MAP (
          sample_spot => sample_spot,
          sample => sample
        );
   stim_proc: process
   begin		
      wait for 100 ns;	
		sample_spot <= "000000";
		wait for 20 ns;
		sample_spot <= "000001";
		wait for 20 ns;
		sample_spot <= "000011";
      wait;
   end process;
END;
