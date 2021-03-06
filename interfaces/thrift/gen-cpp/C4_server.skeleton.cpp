// This autogenerated skeleton file illustrates how to build a server.
// You should copy it to another filename to avoid overwriting it.

#include "C4.h"
#include <thrift/protocol/TBinaryProtocol.h>
#include <thrift/server/TSimpleServer.h>
#include <thrift/transport/TServerSocket.h>
#include <thrift/transport/TBufferTransports.h>

using namespace ::apache::thrift;
using namespace ::apache::thrift::protocol;
using namespace ::apache::thrift::transport;
using namespace ::apache::thrift::server;

using boost::shared_ptr;

using namespace  ::com::cosh::c4::thrift;

class C4Handler : virtual public C4If {
 public:
  C4Handler() {
    // Your initialization goes here
  }

  void InsertOrUpdate(const TRowKey rowId, const TColumnKey columnId, const TValue& value, const TTTL ttl) {
    // Your implementation goes here
    printf("InsertOrUpdate\n");
  }

  void Get(TValue& _return, const TRowKey rowId, const TColumnKey columnId) {
    // Your implementation goes here
    printf("Get\n");
  }

  void TombstoneColumn(const TRowKey rowId, const TColumnKey columnId) {
    // Your implementation goes here
    printf("TombstoneColumn\n");
  }

  void TombstoneRow(const TRowKey rowId) {
    // Your implementation goes here
    printf("TombstoneRow\n");
  }

};

int main(int argc, char **argv) {
  int port = 9090;
  shared_ptr<C4Handler> handler(new C4Handler());
  shared_ptr<TProcessor> processor(new C4Processor(handler));
  shared_ptr<TServerTransport> serverTransport(new TServerSocket(port));
  shared_ptr<TTransportFactory> transportFactory(new TBufferedTransportFactory());
  shared_ptr<TProtocolFactory> protocolFactory(new TBinaryProtocolFactory());

  TSimpleServer server(processor, serverTransport, transportFactory, protocolFactory);
  server.serve();
  return 0;
}

