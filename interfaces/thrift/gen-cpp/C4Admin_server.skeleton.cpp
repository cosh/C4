// This autogenerated skeleton file illustrates how to build a server.
// You should copy it to another filename to avoid overwriting it.

#include "C4Admin.h"
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

class C4AdminHandler : virtual public C4AdminIf {
 public:
  C4AdminHandler() {
    // Your initialization goes here
  }

  void Compact() {
    // Your implementation goes here
    printf("Compact\n");
  }

  void TabulaRasa() {
    // Your implementation goes here
    printf("TabulaRasa\n");
  }

  void Save(const std::string& outputStream) {
    // Your implementation goes here
    printf("Save\n");
  }

  void Load(const std::string& inputStream) {
    // Your implementation goes here
    printf("Load\n");
  }

  void Shutdown() {
    // Your implementation goes here
    printf("Shutdown\n");
  }

};

int main(int argc, char **argv) {
  int port = 9090;
  shared_ptr<C4AdminHandler> handler(new C4AdminHandler());
  shared_ptr<TProcessor> processor(new C4AdminProcessor(handler));
  shared_ptr<TServerTransport> serverTransport(new TServerSocket(port));
  shared_ptr<TTransportFactory> transportFactory(new TBufferedTransportFactory());
  shared_ptr<TProtocolFactory> protocolFactory(new TBinaryProtocolFactory());

  TSimpleServer server(processor, serverTransport, transportFactory, protocolFactory);
  server.serve();
  return 0;
}

