library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_ARITH.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;
use IEEE.numeric_std.ALL;

entity tlu_table is
	port(f: in std_logic_vector(3 downto 0);
		  tlu: out std_logic_vector(10 downto 0));
end tlu_table;

architecture Behavioral of tlu_table is
begin
	process(f) begin
	case f is
		when "0000" => tlu <= "11110100001";
		when "0001" => tlu <= "01111010001";
		when "0010" => tlu <= "01010001011";
		when "0011" => tlu <= "00111101000";
		when "0100" => tlu <= "00110000111";
		when "0101" => tlu <= "00101000110";
		when "0110" => tlu <= "00100010111";
		when "0111" => tlu <= "00011110100";
		when "1000" => tlu <= "00011011001";
		when "1001" => tlu <= "00011000011";
		when "1010" => tlu <= "00010110010";
		when "1011" => tlu <= "00010100011";
		when "1100" => tlu <= "00010010110";
		when "1101" => tlu <= "00010001100";
		when "1110" => tlu <= "00010000010";
		when "1111" => tlu <= "00001111010";
		when others => tlu <= "00000000000";
	end case; end process;
end Behavioral;