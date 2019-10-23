#include <precompiled.hpp>
#include "tetsuo_udp_server.hpp"

void tet::UdpServer::Recieve()
{
}

tet::UdpServer::UdpServer(UdpServerLayout * serverLayout) :
	mServerLayout(serverLayout),
	mSocket(mServerLayout->GetIOContext(), asio::ip::udp::endpoint((mServerLayout->GetIpFlag() == IpStandard::IPV4 ? asio::ip::udp::v4() : asio::ip::udp::v6()), mServerLayout->GetPort()))
{
}

void tet::UdpServer::SetDataPointer(uint8_t * data)
{
	mData = data;
}

void tet::UdpServer::Send()
{
}