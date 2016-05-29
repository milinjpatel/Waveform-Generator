library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_ARITH.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;
use IEEE.numeric_std.ALL;

entity counter_down is
	port(tlu_in: in std_logic_vector(10 downto 0);
		  clk: in std_logic;
		  tswt: out std_logic);
end counter_down;

architecture Behavioral of counter_down is
	signal count: std_logic_vector(10 downto 0):=(others => '0');
begin
	process(clk) begin
	if (clk'event and clk = '1') then
	if (count = 0) then count <= tlu_in; else count <= count - 1; end if;
	end if;
	end process;
	tswt <= '1' when count = "0000000000" else '0';
end Behavioral;