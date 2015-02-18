#include <boost/python.hpp>

#include <neb/py/core/actor/Base.hpp>

typedef neb::py::core::actor::Base THIS;

void	THIS::export_class()
{
	auto c = boost::python::class_<THIS>("Base");
}
THIS::Base()
{
	assert(0);
}
THIS::Base(std::weak_ptr<CORE_TYPE> actor):
	_M_actor(actor)
{
	assert(actor.lock());
}

