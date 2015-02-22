#include <neb/fnd/context/Window.hpp>
#include <neb/fnd/window/Base.hpp>

#include <neb/py/context/Base.hpp>
#include <neb/py/window/Base.hpp>

typedef neb::py::window::Base THIS;

void		THIS::export_class()
{
	auto c = boost::python::class_<THIS>("Base");
	c.def("createContextThree", &THIS::createContextThree);
}
THIS::Base()
{
}
THIS::Base(std::weak_ptr<neb::fnd::window::Base> window)
{
	window_ = window;
}
boost::python::object				THIS::createContextThree()
{
	auto window = window_.lock();
	assert(window);

	auto context = window->createContextThree();

	neb::py::context::Base c_py(context);

	return boost::python::object(c_py);
}
std::shared_ptr<THIS::T>	THIS::get_window()
{
	auto w = window_.lock();
	return w;
}

