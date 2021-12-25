#pragma once
#include <drogon/HttpController.h>
using namespace drogon;

/**
 This class is designed to provide the following functionality
 a) getting list of labor allocations
 b) saving the information about the brand new allocation

*/
class Allocator:public drogon::HttpController<Allocator>
{
  public:
    METHOD_LIST_BEGIN
    
        // Absolute paths
        ADD_METHOD_TO(Allocator::getAllocations,"/allocation/list",Get);
        ADD_METHOD_TO(Allocator::setAllocation, "/allocation", Post);

    METHOD_LIST_END

    void getAllocations(const HttpRequestPtr& req,std::function<void (const HttpResponsePtr &)> &&callback) const;
    void setAllocation(const HttpRequestPtr& req, std::function<void(const HttpResponsePtr&)>&& callback) const;
    
};
