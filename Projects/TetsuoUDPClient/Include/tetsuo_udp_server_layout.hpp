#pragma once

namespace tet
{
	enum class IpStandardFlag
	{
		IPV4 = 0b0001,
		IPV6 = 0b0010
	};

	class UdpServerLayout
	{
	private:
		asio::io_context* mIOContext;
		IpStandardFlag mIpFlag;
		uint16_t mPort;
		uint32_t mMaxDataLength;
	public:
		UdpServerLayout(asio::io_context* context, uint16_t port);
		UdpServerLayout(asio::io_context* context, IpStandardFlag ipStandard, uint16_t port);
		UdpServerLayout(asio::io_context* context, IpStandardFlag ipStandard, uint16_t port, uint32_t maxDataLength);
	};
}