/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.security.KeyRep
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SECURITY_KEYREP_HPP_DECL
#define J2CPP_JAVA_SECURITY_KEYREP_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Enum; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class Comparable; } } }
namespace j2cpp { namespace java { namespace security { namespace KeyRep_ { class Type; } } } }
namespace j2cpp { namespace java { namespace io { class Serializable; } } }


#include <java/io/Serializable.hpp>
#include <java/lang/Comparable.hpp>
#include <java/lang/Enum.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/security/KeyRep.hpp>


namespace j2cpp {

namespace java { namespace security {

	class KeyRep;
	namespace KeyRep_ {

		class Type;
		class Type
			: public object<Type>
		{
		public:

			J2CPP_DECLARE_CLASS

			J2CPP_DECLARE_METHOD(0)
			J2CPP_DECLARE_METHOD(1)
			J2CPP_DECLARE_METHOD(2)
			J2CPP_DECLARE_METHOD(3)
			J2CPP_DECLARE_FIELD(0)
			J2CPP_DECLARE_FIELD(1)
			J2CPP_DECLARE_FIELD(2)
			J2CPP_DECLARE_FIELD(3)

			explicit Type(jobject jobj)
			: object<Type>(jobj)
			{
			}

			operator local_ref<java::lang::Enum>() const;
			operator local_ref<java::lang::Object>() const;
			operator local_ref<java::lang::Comparable>() const;
			operator local_ref<java::io::Serializable>() const;


			static local_ref< array< local_ref< java::security::KeyRep_::Type >, 1> > values();
			static local_ref< java::security::KeyRep_::Type > valueOf(local_ref< java::lang::String >  const&);

			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), local_ref< java::security::KeyRep_::Type > > PRIVATE;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), local_ref< java::security::KeyRep_::Type > > PUBLIC;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), local_ref< java::security::KeyRep_::Type > > SECRET;
		}; //class Type

	} //namespace KeyRep_

	class KeyRep
		: public object<KeyRep>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)

		typedef KeyRep_::Type Type;

		explicit KeyRep(jobject jobj)
		: object<KeyRep>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<java::io::Serializable>() const;


		KeyRep(local_ref< java::security::KeyRep_::Type > const&, local_ref< java::lang::String > const&, local_ref< java::lang::String > const&, local_ref< array<jbyte,1> > const&);
	}; //class KeyRep

} //namespace security
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_SECURITY_KEYREP_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SECURITY_KEYREP_HPP_IMPL
#define J2CPP_JAVA_SECURITY_KEYREP_HPP_IMPL

namespace j2cpp {




java::security::KeyRep_::Type::operator local_ref<java::lang::Enum>() const
{
	return local_ref<java::lang::Enum>(get_jobject());
}

java::security::KeyRep_::Type::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

java::security::KeyRep_::Type::operator local_ref<java::lang::Comparable>() const
{
	return local_ref<java::lang::Comparable>(get_jobject());
}

java::security::KeyRep_::Type::operator local_ref<java::io::Serializable>() const
{
	return local_ref<java::io::Serializable>(get_jobject());
}

local_ref< array< local_ref< java::security::KeyRep_::Type >, 1> > java::security::KeyRep_::Type::values()
{
	return call_static_method<
		java::security::KeyRep_::Type::J2CPP_CLASS_NAME,
		java::security::KeyRep_::Type::J2CPP_METHOD_NAME(0),
		java::security::KeyRep_::Type::J2CPP_METHOD_SIGNATURE(0), 
		local_ref< array< local_ref< java::security::KeyRep_::Type >, 1> >
	>();
}

local_ref< java::security::KeyRep_::Type > java::security::KeyRep_::Type::valueOf(local_ref< java::lang::String > const &a0)
{
	return call_static_method<
		java::security::KeyRep_::Type::J2CPP_CLASS_NAME,
		java::security::KeyRep_::Type::J2CPP_METHOD_NAME(1),
		java::security::KeyRep_::Type::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< java::security::KeyRep_::Type >
	>(a0);
}




static_field<
	java::security::KeyRep_::Type::J2CPP_CLASS_NAME,
	java::security::KeyRep_::Type::J2CPP_FIELD_NAME(0),
	java::security::KeyRep_::Type::J2CPP_FIELD_SIGNATURE(0),
	local_ref< java::security::KeyRep_::Type >
> java::security::KeyRep_::Type::PRIVATE;

static_field<
	java::security::KeyRep_::Type::J2CPP_CLASS_NAME,
	java::security::KeyRep_::Type::J2CPP_FIELD_NAME(1),
	java::security::KeyRep_::Type::J2CPP_FIELD_SIGNATURE(1),
	local_ref< java::security::KeyRep_::Type >
> java::security::KeyRep_::Type::PUBLIC;

static_field<
	java::security::KeyRep_::Type::J2CPP_CLASS_NAME,
	java::security::KeyRep_::Type::J2CPP_FIELD_NAME(2),
	java::security::KeyRep_::Type::J2CPP_FIELD_SIGNATURE(2),
	local_ref< java::security::KeyRep_::Type >
> java::security::KeyRep_::Type::SECRET;


J2CPP_DEFINE_CLASS(java::security::KeyRep_::Type,"java/security/KeyRep$Type")
J2CPP_DEFINE_METHOD(java::security::KeyRep_::Type,0,"values","()[java.security.KeyRep.Type")
J2CPP_DEFINE_METHOD(java::security::KeyRep_::Type,1,"valueOf","(Ljava/lang/String;)Ljava/security/KeyRep$Type;")
J2CPP_DEFINE_METHOD(java::security::KeyRep_::Type,2,"<init>","(Ljava/lang/String;I)V")
J2CPP_DEFINE_METHOD(java::security::KeyRep_::Type,3,"<clinit>","()V")
J2CPP_DEFINE_FIELD(java::security::KeyRep_::Type,0,"PRIVATE","Ljava/security/KeyRep$Type;")
J2CPP_DEFINE_FIELD(java::security::KeyRep_::Type,1,"PUBLIC","Ljava/security/KeyRep$Type;")
J2CPP_DEFINE_FIELD(java::security::KeyRep_::Type,2,"SECRET","Ljava/security/KeyRep$Type;")
J2CPP_DEFINE_FIELD(java::security::KeyRep_::Type,3,"$VALUES","[java.security.KeyRep.Type")



java::security::KeyRep::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

java::security::KeyRep::operator local_ref<java::io::Serializable>() const
{
	return local_ref<java::io::Serializable>(get_jobject());
}


java::security::KeyRep::KeyRep(local_ref< java::security::KeyRep_::Type > const &a0, local_ref< java::lang::String > const &a1, local_ref< java::lang::String > const &a2, local_ref< array<jbyte,1> > const &a3)
: object<java::security::KeyRep>(
	call_new_object<
		java::security::KeyRep::J2CPP_CLASS_NAME,
		java::security::KeyRep::J2CPP_METHOD_NAME(0),
		java::security::KeyRep::J2CPP_METHOD_SIGNATURE(0)
	>(a0, a1, a2, a3)
)
{
}




J2CPP_DEFINE_CLASS(java::security::KeyRep,"java/security/KeyRep")
J2CPP_DEFINE_METHOD(java::security::KeyRep,0,"<init>","(Ljava/security/KeyRep$Type;Ljava/lang/String;Ljava/lang/String;[B)V")
J2CPP_DEFINE_METHOD(java::security::KeyRep,1,"readResolve","()Ljava/lang/Object;")

} //namespace j2cpp

#endif //J2CPP_JAVA_SECURITY_KEYREP_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION