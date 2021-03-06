#ifndef NEB_PY_CORE_GAME_MAP_BASE_HPP
#define NEB_PY_CORE_GAME_MAP_BASE_HPP

#include <boost/python.hpp>

#include <neb/fnd/game/map/util/decl.hpp>

namespace neb { namespace py { namespace game { namespace map {
	class Base
	{
		public:
			typedef neb::fnd::game::map::Base CORE_TYPE;
			static void			export_class();
			Base();
			Base(std::weak_ptr<CORE_TYPE>);
			std::shared_ptr<CORE_TYPE>	get_map();

			boost::python::object		create_scene();
			boost::python::list		getScenes();
			void				spawn_actor(boost::python::object& actor_object);
		protected:
			std::weak_ptr<CORE_TYPE>		_M_map;
	};
}}}}

#endif

