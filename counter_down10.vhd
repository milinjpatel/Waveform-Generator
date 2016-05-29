library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_ARITH.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;
use IEEE.numeric_std.ALL;

entity counter_down10 is
	port(tlu_in: in std_logic_vector(9 downto 0);
		  clk: in std_logic;
		  ttr: out std_logic);
end counter_down10;

architecture Behavioral of counter_down10 is
	signal count: std_logic_vector(9 downto 0):=(others => '0');
begin
	process(clk) begin
	if (clk'event and clk = '1') then
		if (count = "0000000000") then count <= tlu_in;
		else count <= count - 1; end if;
	end if;
	end process;
		ttr <= '1' when count = "0000000000" else '0';
end Behavioral;