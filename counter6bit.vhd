library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_ARITH.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;
use IEEE.numeric_std.ALL;

entity counter6bit is
	port(count, clk: in std_logic;
		  sin_add, cos_add: out std_logic_vector(5 downto 0));
end counter6bit;

architecture Behavioral of counter6bit is
signal counter: std_logic_vector(5 downto 0):=(others => '0');
begin
	process begin
	wait until clk'event and clk = '1';
	if (count = '1') then counter <= counter + 1; end if;
end process;
sin_add <= counter;
cos_add <= counter + 16;
end Behavioral;

