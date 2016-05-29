library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_ARITH.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;
use IEEE.numeric_std.ALL;

entity counter_circuit is
	port(clk: in std_logic;
		  f: in std_logic_vector(3 downto 0);
		  tswt, ttr: out std_logic;
		  dswt, dtr: out std_logic_vector(7 downto 0));
end counter_circuit;

architecture Behavioral of counter_circuit is
	signal tlu: std_logic_vector(10 downto 0);
	signal load1, load2: std_logic;
	component counter_down is
		port(tlu_in: in std_logic_vector(10 downto 0);
		  clk: in std_logic;
		  tswt: out std_logic);
	end component;
	component counter_swt is
		port(clk, inc: in std_logic;
			  dswt: out std_logic_vector(7 downto 0));
	end component;
	component counter_down10 is
		port(tlu_in: in std_logic_vector(10 downto 1);
			  clk: in std_logic;
			  ttr: out std_logic);
	end component;
	component counter_flag is
		port(clk, count: in std_logic;
			  dtr: out std_logic_vector(7 downto 0));
	end component;
	component tlu_table is
		port(f: in std_logic_vector(3 downto 0);
			  tlu: out std_logic_vector(10 downto 0));
	end component;
begin
	TLUT: tlu_table port map(f, tlu);
	D1: counter_down port map(tlu, clk, load1);
	D2: counter_down10 port map(tlu(10 downto 1), clk, load2);
	SWT: counter_swt port map(clk, load1, dswt);
	TR: counter_flag port map(clk, load2, dtr);
	tswt <= load1;
	ttr <= load2;
end Behavioral;