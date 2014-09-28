/*
   +----------------------------------------------------------------------+
   | HipHop for PHP                                                       |
   +----------------------------------------------------------------------+
   | Copyright (c) 2010-2014 Facebook, Inc. (http://www.facebook.com)     |
   | Copyright (c) 1997-2010 The PHP Group                                |
   +----------------------------------------------------------------------+
   | This source file is subject to version 3.01 of the PHP license,      |
   | that is bundled with this package in the file LICENSE, and is        |
   | available through the world-wide-web at the following url:           |
   | http://www.php.net/license/3_01.txt                                  |
   | If you did not receive a copy of the PHP license and are unable to   |
   | obtain it through the world-wide-web, please send a note to          |
   | license@php.net so we can mail you a copy immediately.               |
   +----------------------------------------------------------------------+
*/

#ifndef incl_HPHP_EXT_XMLWRITER_H_
#define incl_HPHP_EXT_XMLWRITER_H_

// >>>>>> Generated by idl.php. Do NOT modify. <<<<<<

#include "hphp/runtime/base/base-includes.h"
#include <libxml/tree.h>
#include <libxml/xmlwriter.h>
#include <libxml/uri.h>
#include "hphp/runtime/base/file.h"
namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

Variant f_xmlwriter_open_memory();
Variant f_xmlwriter_open_uri(const String& uri);
bool f_xmlwriter_set_indent_string(const Object& xmlwriter,
                                   const String& indentstring);
bool f_xmlwriter_set_indent(const Object& xmlwriter, bool indent);
bool f_xmlwriter_start_document(const Object& xmlwriter,
                                const String& version = "1.0",
                                const String& encoding = null_string,
                                const String& standalone = null_string);
bool f_xmlwriter_start_element(const Object& xmlwriter, const String& name);
bool f_xmlwriter_start_element_ns(const Object& xmlwriter, const Variant& prefix, const String& name, const String& uri);
bool f_xmlwriter_write_element_ns(const Object& xmlwriter, const String& prefix, const String& name, const String& uri, const String& content = null_string);
bool f_xmlwriter_write_element(const Object& xmlwriter, const String& name, const String& content = null_string);
bool f_xmlwriter_end_element(const Object& xmlwriter);
bool f_xmlwriter_full_end_element(const Object& xmlwriter);
bool f_xmlwriter_start_attribute_ns(const Object& xmlwriter, const String& prefix, const String& name, const String& uri);
bool f_xmlwriter_start_attribute(const Object& xmlwriter, const String& name);
bool f_xmlwriter_write_attribute_ns(const Object& xmlwriter, const String& prefix, const String& name, const String& uri, const String& content);
bool f_xmlwriter_write_attribute(const Object& xmlwriter, const String& name, const String& value);
bool f_xmlwriter_end_attribute(const Object& xmlwriter);
bool f_xmlwriter_start_cdata(const Object& xmlwriter);
bool f_xmlwriter_write_cdata(const Object& xmlwriter, const String& content);
bool f_xmlwriter_end_cdata(const Object& xmlwriter);
bool f_xmlwriter_start_comment(const Object& xmlwriter);
bool f_xmlwriter_write_comment(const Object& xmlwriter, const String& content);
bool f_xmlwriter_end_comment(const Object& xmlwriter);
bool f_xmlwriter_end_document(const Object& xmlwriter);
bool f_xmlwriter_start_pi(const Object& xmlwriter, const String& target);
bool f_xmlwriter_write_pi(const Object& xmlwriter, const String& target, const String& content);
bool f_xmlwriter_end_pi(const Object& xmlwriter);
bool f_xmlwriter_text(const Object& xmlwriter, const String& content);
bool f_xmlwriter_write_raw(const Object& xmlwriter, const String& content);
bool f_xmlwriter_start_dtd(const Object& xmlwriter, const String& qualifiedname, const String& publicid = null_string, const String& systemid = null_string);
bool f_xmlwriter_write_dtd(const Object& xmlwriter, const String& name, const String& publicid = null_string, const String& systemid = null_string, const String& subset = null_string);
bool f_xmlwriter_start_dtd_element(const Object& xmlwriter, const String& qualifiedname);
bool f_xmlwriter_write_dtd_element(const Object& xmlwriter, const String& name, const String& content);
bool f_xmlwriter_end_dtd_element(const Object& xmlwriter);
bool f_xmlwriter_start_dtd_attlist(const Object& xmlwriter, const String& name);
bool f_xmlwriter_write_dtd_attlist(const Object& xmlwriter, const String& name, const String& content);
bool f_xmlwriter_end_dtd_attlist(const Object& xmlwriter);
bool f_xmlwriter_start_dtd_entity(const Object& xmlwriter, const String& name, bool isparam);
bool f_xmlwriter_write_dtd_entity(const Object& xmlwriter, const String& name, const String& content, bool pe = false, const String& publicid = null_string, const String& systemid = null_string, const String& ndataid = null_string);
bool f_xmlwriter_end_dtd_entity(const Object& xmlwriter);
bool f_xmlwriter_end_dtd(const Object& xmlwriter);
Variant f_xmlwriter_flush(const Object& xmlwriter, bool empty = true);
String f_xmlwriter_output_memory(const Object& xmlwriter, bool flush = true);

///////////////////////////////////////////////////////////////////////////////
// class XMLWriter

FORWARD_DECLARE_CLASS(XMLWriter);
class c_XMLWriter : public ExtObjectData, public Sweepable {
 public:
  DECLARE_CLASS(XMLWriter)

  public: c_XMLWriter(Class* cls = c_XMLWriter::classof());
  public: ~c_XMLWriter();
  public: void t___construct();
  public: bool t_openmemory();
  public: bool t_openuri(const String& uri);
  public: bool t_setindentstring(const String& indentstring);
  public: bool t_setindent(bool indent);
  public: bool t_startdocument(const String& version = "1.0", const String& encoding = null_string, const String& standalone = null_string);
  public: bool t_startelement(const String& name);
  public: bool t_startelementns(const Variant& prefix, const String& name, const Variant& uri);
  public: bool t_writeelementns(const Variant& prefix, const String& name, const Variant& uri, const String& content = null_string);
  public: bool t_writeelement(const String& name, const String& content = null_string);
  public: bool t_endelement();
  public: bool t_fullendelement();
  public: bool t_startattributens(const String& prefix, const String& name, const String& uri);
  public: bool t_startattribute(const String& name);
  public: bool t_writeattributens(const String& prefix, const String& name, const String& uri, const String& content);
  public: bool t_writeattribute(const String& name, const String& value);
  public: bool t_endattribute();
  public: bool t_startcdata();
  public: bool t_writecdata(const String& content);
  public: bool t_endcdata();
  public: bool t_startcomment();
  public: bool t_writecomment(const String& content);
  public: bool t_endcomment();
  public: bool t_enddocument();
  public: bool t_startpi(const String& target);
  public: bool t_writepi(const String& target, const String& content);
  public: bool t_endpi();
  public: bool t_text(const String& content);
  public: bool t_writeraw(const String& content);
  public: bool t_startdtd(const String& qualifiedname, const String& publicid = null_string, const String& systemid = null_string);
  public: bool t_writedtd(const String& name, const String& publicid = null_string, const String& systemid = null_string, const String& subset = null_string);
  public: bool t_startdtdelement(const String& qualifiedname);
  public: bool t_writedtdelement(const String& name, const String& content);
  public: bool t_enddtdelement();
  public: bool t_startdtdattlist(const String& name);
  public: bool t_writedtdattlist(const String& name, const String& content);
  public: bool t_enddtdattlist();
  public: bool t_startdtdentity(const String& name, bool isparam);
  public: bool t_writedtdentity(const String& name, const String& content, bool pe = false, const String& publicid = null_string, const String& systemid = null_string, const String& ndataid = null_string);
  public: bool t_enddtdentity();
  public: bool t_enddtd();
  public: Variant t_flush(bool empty = true);
  public: String t_outputmemory(bool flush = true);



 public:
  Resource  m_uri;
 private:
  xmlTextWriterPtr   m_ptr;
  xmlBufferPtr       m_output;
};

///////////////////////////////////////////////////////////////////////////////
}

#endif // incl_HPHP_EXT_XMLWRITER_H_