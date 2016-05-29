library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_ARITH.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;
use IEEE.numeric_std.ALL;

entity counter_flag is
	port(clk, count: in std_logic;
		  dtr: out std_logic_vector(7 downto 0));
end counter_flag;

architecture Behavioral of counter_flag is
	signal up: std_logic:='1';
	signal counter: std_logic_vector(7 downto 0):=(others => '0');
begin
	process(clk) begin
	if (clk'event and clk = '1') then
	if (up = '1') then if (count = '1') then if (counter = "11111111") then up <= '0';
						  else counter <= counter + 1; end if; end if;
	elsif (count = '1') then if (counter = 0) then up <= '1'; 
									 else counter <= counter - 1; end if; end if;
	end if;  end process;
	dtr <= counter;
end Behavioral;