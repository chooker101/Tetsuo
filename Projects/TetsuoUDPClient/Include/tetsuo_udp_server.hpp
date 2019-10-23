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
		uint8_t* mData = nullptr;
		
		void Recieve();
	public:
		UdpServer(UdpServerLayout* serverLayout);
		void SetDataPointer(uint8_t* data);
		void Send();
	};
}