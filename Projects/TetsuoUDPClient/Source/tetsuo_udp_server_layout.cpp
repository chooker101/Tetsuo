#include <precompiled.hpp>
#include "tetsuo_udp_server_layout.hpp"

tet::UdpServerLayout::UdpServerLayout(asio::io_context * context, IpStandard ipStandard, uint16_t port, uint32_t maxDataLength) : mIOContext(context), mPort(port), mIpFlag(ipStandard), mMaxDataLength(maxDataLength)
{
}
