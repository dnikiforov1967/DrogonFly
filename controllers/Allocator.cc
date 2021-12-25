#include "Allocator.h"
#include "plugins/InMemStorage.h"
//add definition of your processing function here

void Allocator::getAllocations(const HttpRequestPtr& req, std::function<void(const HttpResponsePtr&)>&& callback) const {
    Json::Value ret;
    ret["name"] = "Washington";
    ret["type"] = "City";
    auto resp = HttpResponse::newHttpJsonResponse(ret);
    callback(resp);
}

void Allocator::setAllocation(const HttpRequestPtr& req, std::function<void(const HttpResponsePtr&)>&& callback) const {
    //I am going to save the data into storage
    auto inMemStorage = app().getPlugin<InMemStorage>();
    Json::Value ret;
    ret["name"] = "Washington";
    ret["type"] = "City";
    auto resp = HttpResponse::newHttpJsonResponse(ret);
    callback(resp);
}