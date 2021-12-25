#pragma once
#include <drogon/HttpController.h>
using namespace drogon;
class Allocator:public drogon::HttpController<Allocator>
{
  public:
    METHOD_LIST_BEGIN
    //use METHOD_ADD to add your custom processing function here;
    //METHOD_ADD(Allocator::get,"/{2}/{1}",Get);//path is /Allocator/{arg2}/{arg1}
    //METHOD_ADD(Allocator::your_method_name,"/{1}/{2}/list",Get);//path is /Allocator/{arg1}/{arg2}/list
    ADD_METHOD_TO(Allocator::getAllocations,"/allocation/list",Get);
    ADD_METHOD_TO(Allocator::setAllocation, "/allocation", Post);

    METHOD_LIST_END
    // your declaration of processing function maybe like this:
    void getAllocations(const HttpRequestPtr& req,std::function<void (const HttpResponsePtr &)> &&callback) const;
    void setAllocation(const HttpRequestPtr& req, std::function<void(const HttpResponsePtr&)>&& callback) const;
    // void your_method_name(const HttpRequestPtr& req,std::function<void (const HttpResponsePtr &)> &&callback,double p1,int p2) const;
};
