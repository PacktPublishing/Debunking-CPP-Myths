#include <caf/all.hpp>
#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;
using std::this_thread::sleep_for;
using std::chrono::seconds;
using caf::behavior;
using caf::event_based_actor;
using caf::actor_system;
using caf::scoped_actor;

behavior chatter(event_based_actor* self, const string& name) {
	return {
		[=] (const string& msg) {
			cout << name << " received: " << msg << endl;
		}
	};
}

void caf_main(actor_system& system) {
	auto alice = system.spawn(chatter, "Alice");
	auto bob = system.spawn(chatter, "Bob");

	scoped_actor self{system};
	self->send(alice, "Hello Alice!");
	self->send(bob, "Hello Bob!");

	self->send(alice, "How are you?");
	self->send(bob, "I'm good, thanks!");

	sleep_for(seconds(1));
}

CAF_MAIN()
