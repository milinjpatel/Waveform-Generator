library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_ARITH.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;
use IEEE.numeric_std.ALL;

entity ROM_address is
	port(sample_spot: in std_logic_vector(5 downto 0);
        sample: out std_logic_vector(11 downto 0));
end ROM_address;

architecture Behavioral of ROM_address is
	type rom is array (0 to 63) of integer;
	constant ss_conv: rom := (2048,2248,2447,2642,2831,3013,3185,3346,3495,3630,3750,3853,3939,4007,4056,4085,4095,4085,
									  4056,4007,3939,3853,3750,3630,3495,3346,3185,3013,2831,2642,2447,2248,2047,1847,1648,1453,
									  1264,1082,910,749,600,465,345,242,156,88,39,10,0,10,39,88,156,242,345,465,600,749,910,1082,
									  1264,1453,1648,1847);          
begin
	sample <= conv_std_logic_vector(ss_conv(conv_integer(sample_spot)), 12);
end Behavioral;

