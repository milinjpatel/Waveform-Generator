library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_ARITH.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;
use IEEE.numeric_std.ALL;

entity sin_cos_generator is
	port(f: in std_logic_vector(3 downto 0);
		  clk: in std_logic;
		  Tsincos: out std_logic;
		  sin_amp, cos_amp: out std_logic_vector(11 downto 0));
end sin_cos_generator;

architecture Behavioral of sin_cos_generator is
	signal tlu_in: std_logic_vector(10 downto 0);
	signal sin_add: std_logic_vector(5 downto 0);
	signal cos_add: std_logic_vector(5 downto 0);
	signal tsc: std_logic;
	component ROM_address is
	port(sample_spot: in std_logic_vector(5 downto 0);
        sample: out std_logic_vector(11 downto 0));
	end component;
	component counter13bit is
	port(tlu_in: in std_logic_vector(10 downto 0);
		  clk: in std_logic;
		  load: out std_logic);
	end component;
	component counter6bit is
	port(count, clk: in std_logic;
		  sin_add, cos_add: out std_logic_vector(5 downto 0));
	end component;
	component tlu_table is
	port(f: in std_logic_vector(3 downto 0);
		  tlu: out std_logic_vector(10 downto 0));
	end component;
begin
	TT: tlu_table port map(f, tlu_in);
	D3: counter13bit port map(tlu_in, clk, tsc);
	ADD: counter6bit port map(tsc, clk, sin_add, cos_add);
	sin: ROM_address port map(sin_add, sin_amp);
	cos: ROM_address port map(cos_add, cos_amp);
	Tsincos <= tsc;
end Behavioral;

