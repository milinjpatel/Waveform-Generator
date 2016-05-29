library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_ARITH.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;
use IEEE.numeric_std.ALL;

entity Controller is
	port(clk, tswt, transmitting, reset, ttr, Tsincos: in std_logic;
		  dswt, dtr: in std_logic_vector(7 downto 0);
		  sin_amp, cos_amp: in std_logic_vector(11 downto 0);
		  go_dac: out std_logic;
		  address_dac: out std_logic_vector(3 downto 0);
		  datain_dac: out std_logic_vector(11 downto 0));
end Controller;

architecture Behavioral of Controller is
	signal counter: std_logic_vector(10 downto 0);
	type state_type is(S0, S1, S2, S3, S4);
	signal state: state_type;
	signal req1, req2, req3, req4: std_logic:='0';
begin
	process(clk, reset) begin
		if (reset = '1') then state <= S0;
		elsif (clk'event and clk = '1') then
		if (Tsincos = '1') then req3 <= Tsincos; req4 <= Tsincos; end if;
		if (tswt = '1') then req1 <= tswt; end if;
		if (ttr = '1') then req2 <= ttr; end if;
		case state is
			when S0 => 
				if (req4 = '1') then
					datain_dac <= sin_amp; address_dac <= "0011"; go_dac <= '1'; req4 <= '0'; state <= S1;
				elsif (req3 = '1') then
					datain_dac <= cos_amp; address_dac <= "0010"; go_dac <= '1'; req3 <= '0'; state <= S1;
				elsif (req1 = '1') then
					datain_dac <= dswt&"0000"; address_dac <= "0000"; go_dac <= '1'; req1 <= '0'; state <= S1;
				elsif (req2 = '1') then
					datain_dac <= dtr&"0000"; address_dac <= "0001"; go_dac <= '1'; req2 <= '0'; state <= S1;
				end if;
			when S1 => go_dac <= '0'; state <= S2;
			when S2 => state <= S3;
			when S3 => if (transmitting = '1') then state <= S3; else state <= S4; end if;
			when S4 => state <= S0;
		end case;
	end if; end process;
end Behavioral;

