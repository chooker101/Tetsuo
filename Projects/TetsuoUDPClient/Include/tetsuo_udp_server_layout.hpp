#pragma once

namespace tet
{
	enum class IpStandard
	{
		IPV4 = 1,
		IPV6 = 2
	};

	class UdpServerLayout
	{
	private:
		asio::io_context* mIOContext = nullptr;
		IpStandard mIpFlag = IpStandard::IPV4;
		uint16_t mPort = 80;
		uint32_t mMaxDataLength = 1024;
	public:
		UdpServerLayout(asio::io_context* context, IpStandard ipStandard = IpStandard::IPV4, uint16_t port = 80, uint32_t maxDataLength = 1024);

		const asio::io_context* GetIOContext() const { return mIOContext; }
		asio::io_context* GetIOContext() { return mIOContext; }
		IpStandard GetIpFlag() const { return mIpFlag; }
		uint16_t GetPort() const { return mPort; }
		uint32_t GetMaxDataLength() const { return mMaxDataLength; }

		void SetIOContext(asio::io_context* context) { mIOContext = context; }
		void SetIpFlag(IpStandard ipStandard) { mIpFlag = ipStandard; }
		void SetPort(uint16_t port) { mPort = port; }
		void SetMaxDataLength(uint32_t maxDataLength) { mMaxDataLength = maxDataLength; }
	};
}