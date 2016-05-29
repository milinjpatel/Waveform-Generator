library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_ARITH.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;
use IEEE.numeric_std.ALL;

entity counter_swt is
	port(clk, inc: in std_logic;
		  dswt: out std_logic_vector(7 downto 0));
end counter_swt;

architecture Behavioral of counter_swt is
	signal count: std_logic_vector(7 downto 0):=(others => '0');
begin
	process(clk) begin
		if (clk'event and clk = '1') then
			if (inc = '1') then count <= count + 1; end if;
		end if;
	end process;
	dswt <= count;
end Behavioral;