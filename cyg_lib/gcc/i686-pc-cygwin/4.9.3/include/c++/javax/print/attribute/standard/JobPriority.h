
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_print_attribute_standard_JobPriority__
#define __javax_print_attribute_standard_JobPriority__

#pragma interface

#include <javax/print/attribute/IntegerSyntax.h>
extern "Java"
{
  namespace javax
  {
    namespace print
    {
      namespace attribute
      {
        namespace standard
        {
            class JobPriority;
        }
      }
    }
  }
}

class javax::print::attribute::standard::JobPriority : public ::javax::print::attribute::IntegerSyntax
{

public:
  JobPriority(jint);
  jboolean equals(::java::lang::Object *);
  ::java::lang::Class * getCategory();
  ::java::lang::String * getName();
private:
  static const jlong serialVersionUID = -4599900369040602769LL;
public:
  static ::java::lang::Class class$;
};

#endif // __javax_print_attribute_standard_JobPriority__
