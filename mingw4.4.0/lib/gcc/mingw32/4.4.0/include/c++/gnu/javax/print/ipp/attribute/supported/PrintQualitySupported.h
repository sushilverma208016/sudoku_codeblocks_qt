
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_javax_print_ipp_attribute_supported_PrintQualitySupported__
#define __gnu_javax_print_ipp_attribute_supported_PrintQualitySupported__

#pragma interface

#include <javax/print/attribute/EnumSyntax.h>
#include <gcj/array.h>

extern "Java"
{
  namespace gnu
  {
    namespace javax
    {
      namespace print
      {
        namespace ipp
        {
          namespace attribute
          {
            namespace supported
            {
                class PrintQualitySupported;
            }
          }
        }
      }
    }
  }
  namespace javax
  {
    namespace print
    {
      namespace attribute
      {
          class EnumSyntax;
        namespace standard
        {
            class PrintQuality;
        }
      }
    }
  }
}

class gnu::javax::print::ipp::attribute::supported::PrintQualitySupported : public ::javax::print::attribute::EnumSyntax
{

public: // actually protected
  PrintQualitySupported(jint);
public:
  ::java::lang::Class * getCategory();
  ::java::lang::String * getName();
public: // actually protected
  JArray< ::java::lang::String * > * getStringTable();
  JArray< ::javax::print::attribute::EnumSyntax * > * getEnumValueTable();
  jint getOffset();
public:
  ::javax::print::attribute::standard::PrintQuality * getAssociatedAttribute();
  static JArray< ::javax::print::attribute::standard::PrintQuality * > * getAssociatedAttributeArray(::java::util::Set *);
  static ::gnu::javax::print::ipp::attribute::supported::PrintQualitySupported * DRAFT;
  static ::gnu::javax::print::ipp::attribute::supported::PrintQualitySupported * NORMAL;
  static ::gnu::javax::print::ipp::attribute::supported::PrintQualitySupported * HIGH;
private:
  static JArray< ::java::lang::String * > * stringTable;
  static JArray< ::gnu::javax::print::ipp::attribute::supported::PrintQualitySupported * > * enumValueTable;
public:
  static ::java::lang::Class class$;
};

#endif // __gnu_javax_print_ipp_attribute_supported_PrintQualitySupported__
