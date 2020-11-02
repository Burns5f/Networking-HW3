/* ICMP Packet Structure */
#define ECHOREPLY 0
#define ECHO      8
struct icmpgram
{
	uint type;
	uint code;
	ushort checksum;
	ushort identifier;
	ushort seqnum;
	uchar sha[ETH_ADDR_LEN];
	uchar spa[IP_ADDR_LEN];
	uchar tha[ETH_ADDR_LEN];
	uchar tpa[IP_ADDR_LEN];
}; 
