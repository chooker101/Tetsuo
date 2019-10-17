#pragma once
#include "tetsuo_udp_server_layout.hpp"

namespace tet
{
	class UdpServer
	{
	private:
		UdpServerLayout* mServerLayout = nullptr;
		asio::ip::udp::socket mSocket;
		asio::ip::udp::endpoint mSenderEndpoint;
	public:
		UdpServer(UdpServerLayout* serverLayout);

	};
}