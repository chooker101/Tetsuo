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
		asio::io_context* mIOContext = nullptr;
		IpStandardFlag mIpFlag = IpStandardFlag::IPV4;
		uint16_t mPort = 80;
		uint32_t mMaxDataLength = 1024;
	public:
		UdpServerLayout(asio::io_context* context, uint16_t port);
		UdpServerLayout(asio::io_context* context, IpStandardFlag ipStandard, uint16_t port);
		UdpServerLayout(asio::io_context* context, IpStandardFlag ipStandard, uint16_t port, uint32_t maxDataLength);

		const asio::io_context* GetIOContext() const { return mIOContext; }
		IpStandardFlag GetIpFlag() const { return mIpFlag; }
		uint16_t GetPort() const { return mPort; }
		uint32_t GetMaxDataLength() const { return mMaxDataLength; }

		void SetIOContext(asio::io_context* context) { mIOContext = context; }
		void SetIpFlag(IpStandardFlag ipStandard) { mIpFlag = ipStandard; }
		void SetPort(uint16_t port) { mPort = port; }
		void SetMaxDataLength(uint32_t maxDataLength) { mMaxDataLength = maxDataLength; }
	};
}