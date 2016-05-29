library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_ARITH.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;
use IEEE.numeric_std.ALL;

entity counter13bit is
	port(tlu_in: in std_logic_vector(10 downto 0);
		  clk: in std_logic;
		  load: out std_logic);
end counter13bit;

architecture Behavioral of counter13bit is
signal counter: std_logic_vector(12 downto 0):=(others => '0');
begin
	process begin
	wait until clk'event and clk = '1';
	if (counter = "0000000000000") then counter <= tlu_in&"00"; else counter <= counter - 1; end if;
	end process;
	load <= '1' when counter = "0000000000000" else '0';
end Behavioral;

