#ifndef NEB_PY_WINDOW_BASE
#define NEB_PY_WINDOW_BASE

#include <boost/python.hpp>

#include <neb/core/util/decl.hpp>

namespace neb { namespace py { namespace window {
	class Base {
		public:
			typedef neb::core::window::Base T;
			static void				export_class();
			Base();
			Base(std::weak_ptr<neb::core::window::Base>);
			boost::python::object			createContextThree();
			std::shared_ptr<T>			get_window();
		private:
			std::weak_ptr<T>			window_;
	};
}}}

#endif
