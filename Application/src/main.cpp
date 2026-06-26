#include <crow_all.h>

int main()
{
	crow::SimpleApp app;

	CROW_ROUTE(app, "/")([]() {
			return "Hello, world";
			});

	app.port(8080).multithreaded().run();
}


/*
#include <iostream>

#include <bsoncxx/builder/basic/document.hpp>
#include <bsoncxx/json.hpp>
#include <mongocxx/client.hpp>
#include <mongocxx/instance.hpp>
#include <mongocxx/uri.hpp>

using bsoncxx::builder::basic::kvp;
using bsoncxx::builder::basic::make_document;

int main()
{
	mongocxx::instance instance;
	mongocxx::uri uri("mongodb+srv://ThatChemical:bellyboi2016@ucsdevcluster.ntyi1sv.mongodb.net/?appName=UCSDevCluster");
	mongocxx::client client(uri);

	auto db = client["sample_mflix"];
	auto collection = db["movies"];

	auto result = collection.find_one(make_document(kvp("title", "The Shawshank Redemption")));

	if (result) {
		std::cout << bsoncxx::to_json(*result) << std::endl;
	} else {
		std::cout << "No result found" << std::endl;
	}

}
*/
