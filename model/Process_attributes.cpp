/**
 * ProcessMaker API
 * This ProcessMaker I/O API provides access to a BPMN 2.0 compliant workflow engine api that is designed to be used as a microservice to support enterprise cloud applications.  The current Alpha 1.0 version supports most of the descriptive class of the BPMN 2.0 specification.
 *
 * OpenAPI spec version: 1.0.0
 * Contact: support@processmaker.io
 *
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */



#include "Process_attributes.h"

namespace io {
namespace processmaker {
namespace pmio {
namespace model {

Process_attributes::Process_attributes()
{
    m_Name = U("");
    m_Description = U("");
    m_DescriptionIsSet = false;
    m_Parent_process_id = U("");
    m_Parent_process_idIsSet = false;
    m_Status = U("");
    m_Duration_by = U("");
    m_Type = U("");
    m_Assignment = false;
    m_AssignmentIsSet = false;
    m_Design_access = U("");
    m_Show_map = false;
    m_Show_mapIsSet = false;
    m_Show_message = false;
    m_Show_messageIsSet = false;
    m_Show_delegate = false;
    m_Show_delegateIsSet = false;
    m_Show_dynaform = false;
    m_Show_dynaformIsSet = false;
    m_Category_id = U("");
    m_Category_idIsSet = false;
    m_Sub_category_id = U("");
    m_Sub_category_idIsSet = false;
    m_Create_user_id = U("");
    m_Create_user_idIsSet = false;
    m_Debug = false;
    m_DebugIsSet = false;
    m_Dynaform_summary_id = U("");
    m_Dynaform_summary_idIsSet = false;
    m_Created_at = U("");
    m_Created_atIsSet = false;
    m_Updated_at = U("");
    m_Updated_atIsSet = false;
    
}

Process_attributes::~Process_attributes()
{
}

void Process_attributes::validate() 
{
    // TODO: implement validation
}

web::json::value Process_attributes::toJson() const
{
    web::json::value val = web::json::value::object();
     
	val[U("name")] = ModelBase::toJson(m_Name);
    if(m_DescriptionIsSet)
    {
        val[U("description")] = ModelBase::toJson(m_Description);
    }
    if(m_Parent_process_idIsSet)
    {
        val[U("parent_process_id")] = ModelBase::toJson(m_Parent_process_id);
    }
    val[U("status")] = ModelBase::toJson(m_Status);
    val[U("duration_by")] = ModelBase::toJson(m_Duration_by);
    val[U("type")] = ModelBase::toJson(m_Type);
    if(m_AssignmentIsSet)
    {
        val[U("assignment")] = ModelBase::toJson(m_Assignment);
    }
    val[U("design_access")] = ModelBase::toJson(m_Design_access);
    if(m_Show_mapIsSet)
    {
        val[U("show_map")] = ModelBase::toJson(m_Show_map);
    }
    if(m_Show_messageIsSet)
    {
        val[U("show_message")] = ModelBase::toJson(m_Show_message);
    }
    if(m_Show_delegateIsSet)
    {
        val[U("show_delegate")] = ModelBase::toJson(m_Show_delegate);
    }
    if(m_Show_dynaformIsSet)
    {
        val[U("show_dynaform")] = ModelBase::toJson(m_Show_dynaform);
    }
    if(m_Category_idIsSet)
    {
        val[U("category_id")] = ModelBase::toJson(m_Category_id);
    }
    if(m_Sub_category_idIsSet)
    {
        val[U("sub_category_id")] = ModelBase::toJson(m_Sub_category_id);
    }
    if(m_Create_user_idIsSet)
    {
        val[U("create_user_id")] = ModelBase::toJson(m_Create_user_id);
    }
    if(m_DebugIsSet)
    {
        val[U("debug")] = ModelBase::toJson(m_Debug);
    }
    if(m_Dynaform_summary_idIsSet)
    {
        val[U("dynaform_summary_id")] = ModelBase::toJson(m_Dynaform_summary_id);
    }
    if(m_Created_atIsSet)
    {
        val[U("created_at")] = ModelBase::toJson(m_Created_at);
    }
    if(m_Updated_atIsSet)
    {
        val[U("updated_at")] = ModelBase::toJson(m_Updated_at);
    }
    

    return val;
}

void Process_attributes::fromJson(web::json::value& val)
{
    setName(ModelBase::stringFromJson(val[U("name")]));
    if(val.has_field(U("description")))
    {
        setDescription(ModelBase::stringFromJson(val[U("description")]));
                
    }
    if(val.has_field(U("parent_process_id")))
    {
        setParentProcessId(ModelBase::stringFromJson(val[U("parent_process_id")]));
                
    }
    setStatus(ModelBase::stringFromJson(val[U("status")]));
    setDurationBy(ModelBase::stringFromJson(val[U("duration_by")]));
    setType(ModelBase::stringFromJson(val[U("type")]));
    if(val.has_field(U("assignment")))
    {
        setAssignment(ModelBase::boolFromJson(val[U("assignment")]));
    }
    setDesignAccess(ModelBase::stringFromJson(val[U("design_access")]));
    if(val.has_field(U("show_map")))
    {
        setShowMap(ModelBase::boolFromJson(val[U("show_map")]));
    }
    if(val.has_field(U("show_message")))
    {
        setShowMessage(ModelBase::boolFromJson(val[U("show_message")]));
    }
    if(val.has_field(U("show_delegate")))
    {
        setShowDelegate(ModelBase::boolFromJson(val[U("show_delegate")]));
    }
    if(val.has_field(U("show_dynaform")))
    {
        setShowDynaform(ModelBase::boolFromJson(val[U("show_dynaform")]));
    }
    if(val.has_field(U("category_id")))
    {
        setCategoryId(ModelBase::stringFromJson(val[U("category_id")]));
                
    }
    if(val.has_field(U("sub_category_id")))
    {
        setSubCategoryId(ModelBase::stringFromJson(val[U("sub_category_id")]));
                
    }
    if(val.has_field(U("create_user_id")))
    {
        setCreateUserId(ModelBase::stringFromJson(val[U("create_user_id")]));
                
    }
    if(val.has_field(U("debug")))
    {
        setDebug(ModelBase::boolFromJson(val[U("debug")]));
    }
    if(val.has_field(U("dynaform_summary_id")))
    {
        setDynaformSummaryId(ModelBase::stringFromJson(val[U("dynaform_summary_id")]));
                
    }
    if(val.has_field(U("created_at")))
    {
        setCreatedAt(ModelBase::stringFromJson(val[U("created_at")]));
                
    }
    if(val.has_field(U("updated_at")))
    {
        setUpdatedAt(ModelBase::stringFromJson(val[U("updated_at")]));
                
    }
    
}

void Process_attributes::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
	if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
	{
		namePrefix += U(".");
	}

	multipart->add(ModelBase::toHttpContent(namePrefix + U("name"), m_Name));
    if(m_DescriptionIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("description"), m_Description));
                
    }
    if(m_Parent_process_idIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("parent_process_id"), m_Parent_process_id));
                
    }
    multipart->add(ModelBase::toHttpContent(namePrefix + U("status"), m_Status));
    multipart->add(ModelBase::toHttpContent(namePrefix + U("duration_by"), m_Duration_by));
    multipart->add(ModelBase::toHttpContent(namePrefix + U("type"), m_Type));
    if(m_AssignmentIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("assignment"), m_Assignment));
    }
    multipart->add(ModelBase::toHttpContent(namePrefix + U("design_access"), m_Design_access));
    if(m_Show_mapIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("show_map"), m_Show_map));
    }
    if(m_Show_messageIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("show_message"), m_Show_message));
    }
    if(m_Show_delegateIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("show_delegate"), m_Show_delegate));
    }
    if(m_Show_dynaformIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("show_dynaform"), m_Show_dynaform));
    }
    if(m_Category_idIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("category_id"), m_Category_id));
                
    }
    if(m_Sub_category_idIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("sub_category_id"), m_Sub_category_id));
                
    }
    if(m_Create_user_idIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("create_user_id"), m_Create_user_id));
                
    }
    if(m_DebugIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("debug"), m_Debug));
    }
    if(m_Dynaform_summary_idIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("dynaform_summary_id"), m_Dynaform_summary_id));
                
    }
    if(m_Created_atIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("created_at"), m_Created_at));
                
    }
    if(m_Updated_atIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("updated_at"), m_Updated_at));
                
    }
    
}

void Process_attributes::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
	if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
	{
		namePrefix += U(".");
	}

    setName(ModelBase::stringFromHttpContent(multipart->getContent(U("name"))));
    if(multipart->hasContent(U("description")))
    {
        setDescription(ModelBase::stringFromHttpContent(multipart->getContent(U("description"))));
                
    }
    if(multipart->hasContent(U("parent_process_id")))
    {
        setParentProcessId(ModelBase::stringFromHttpContent(multipart->getContent(U("parent_process_id"))));
                
    }
    setStatus(ModelBase::stringFromHttpContent(multipart->getContent(U("status"))));
    setDurationBy(ModelBase::stringFromHttpContent(multipart->getContent(U("duration_by"))));
    setType(ModelBase::stringFromHttpContent(multipart->getContent(U("type"))));
    if(multipart->hasContent(U("assignment")))
    {
        setAssignment(ModelBase::boolFromHttpContent(multipart->getContent(U("assignment"))));
    }
    setDesignAccess(ModelBase::stringFromHttpContent(multipart->getContent(U("design_access"))));
    if(multipart->hasContent(U("show_map")))
    {
        setShowMap(ModelBase::boolFromHttpContent(multipart->getContent(U("show_map"))));
    }
    if(multipart->hasContent(U("show_message")))
    {
        setShowMessage(ModelBase::boolFromHttpContent(multipart->getContent(U("show_message"))));
    }
    if(multipart->hasContent(U("show_delegate")))
    {
        setShowDelegate(ModelBase::boolFromHttpContent(multipart->getContent(U("show_delegate"))));
    }
    if(multipart->hasContent(U("show_dynaform")))
    {
        setShowDynaform(ModelBase::boolFromHttpContent(multipart->getContent(U("show_dynaform"))));
    }
    if(multipart->hasContent(U("category_id")))
    {
        setCategoryId(ModelBase::stringFromHttpContent(multipart->getContent(U("category_id"))));
                
    }
    if(multipart->hasContent(U("sub_category_id")))
    {
        setSubCategoryId(ModelBase::stringFromHttpContent(multipart->getContent(U("sub_category_id"))));
                
    }
    if(multipart->hasContent(U("create_user_id")))
    {
        setCreateUserId(ModelBase::stringFromHttpContent(multipart->getContent(U("create_user_id"))));
                
    }
    if(multipart->hasContent(U("debug")))
    {
        setDebug(ModelBase::boolFromHttpContent(multipart->getContent(U("debug"))));
    }
    if(multipart->hasContent(U("dynaform_summary_id")))
    {
        setDynaformSummaryId(ModelBase::stringFromHttpContent(multipart->getContent(U("dynaform_summary_id"))));
                
    }
    if(multipart->hasContent(U("created_at")))
    {
        setCreatedAt(ModelBase::stringFromHttpContent(multipart->getContent(U("created_at"))));
                
    }
    if(multipart->hasContent(U("updated_at")))
    {
        setUpdatedAt(ModelBase::stringFromHttpContent(multipart->getContent(U("updated_at"))));
                
    }
    
}
    
   
utility::string_t Process_attributes::getName() const
{
	return m_Name;
}
void Process_attributes::setName(utility::string_t value)
{
	m_Name = value;
    
}
utility::string_t Process_attributes::getDescription() const
{
	return m_Description;
}
void Process_attributes::setDescription(utility::string_t value)
{
	m_Description = value;
    m_DescriptionIsSet = true;
}
bool Process_attributes::descriptionIsSet() const
{
    return m_DescriptionIsSet;
}
void Process_attributes::unsetDescription() 
{
    m_DescriptionIsSet = false;
}
utility::string_t Process_attributes::getParentProcessId() const
{
	return m_Parent_process_id;
}
void Process_attributes::setParentProcessId(utility::string_t value)
{
	m_Parent_process_id = value;
    m_Parent_process_idIsSet = true;
}
bool Process_attributes::parent_process_idIsSet() const
{
    return m_Parent_process_idIsSet;
}
void Process_attributes::unsetParent_process_id() 
{
    m_Parent_process_idIsSet = false;
}
utility::string_t Process_attributes::getStatus() const
{
	return m_Status;
}
void Process_attributes::setStatus(utility::string_t value)
{
	m_Status = value;
    
}
utility::string_t Process_attributes::getDurationBy() const
{
	return m_Duration_by;
}
void Process_attributes::setDurationBy(utility::string_t value)
{
	m_Duration_by = value;
    
}
utility::string_t Process_attributes::getType() const
{
	return m_Type;
}
void Process_attributes::setType(utility::string_t value)
{
	m_Type = value;
    
}
bool Process_attributes::getAssignment() const
{
	return m_Assignment;
}
void Process_attributes::setAssignment(bool value)
{
	m_Assignment = value;
    m_AssignmentIsSet = true;
}
bool Process_attributes::assignmentIsSet() const
{
    return m_AssignmentIsSet;
}
void Process_attributes::unsetAssignment() 
{
    m_AssignmentIsSet = false;
}
utility::string_t Process_attributes::getDesignAccess() const
{
	return m_Design_access;
}
void Process_attributes::setDesignAccess(utility::string_t value)
{
	m_Design_access = value;
    
}
bool Process_attributes::getShowMap() const
{
	return m_Show_map;
}
void Process_attributes::setShowMap(bool value)
{
	m_Show_map = value;
    m_Show_mapIsSet = true;
}
bool Process_attributes::show_mapIsSet() const
{
    return m_Show_mapIsSet;
}
void Process_attributes::unsetShow_map() 
{
    m_Show_mapIsSet = false;
}
bool Process_attributes::getShowMessage() const
{
	return m_Show_message;
}
void Process_attributes::setShowMessage(bool value)
{
	m_Show_message = value;
    m_Show_messageIsSet = true;
}
bool Process_attributes::show_messageIsSet() const
{
    return m_Show_messageIsSet;
}
void Process_attributes::unsetShow_message() 
{
    m_Show_messageIsSet = false;
}
bool Process_attributes::getShowDelegate() const
{
	return m_Show_delegate;
}
void Process_attributes::setShowDelegate(bool value)
{
	m_Show_delegate = value;
    m_Show_delegateIsSet = true;
}
bool Process_attributes::show_delegateIsSet() const
{
    return m_Show_delegateIsSet;
}
void Process_attributes::unsetShow_delegate() 
{
    m_Show_delegateIsSet = false;
}
bool Process_attributes::getShowDynaform() const
{
	return m_Show_dynaform;
}
void Process_attributes::setShowDynaform(bool value)
{
	m_Show_dynaform = value;
    m_Show_dynaformIsSet = true;
}
bool Process_attributes::show_dynaformIsSet() const
{
    return m_Show_dynaformIsSet;
}
void Process_attributes::unsetShow_dynaform() 
{
    m_Show_dynaformIsSet = false;
}
utility::string_t Process_attributes::getCategoryId() const
{
	return m_Category_id;
}
void Process_attributes::setCategoryId(utility::string_t value)
{
	m_Category_id = value;
    m_Category_idIsSet = true;
}
bool Process_attributes::category_idIsSet() const
{
    return m_Category_idIsSet;
}
void Process_attributes::unsetCategory_id() 
{
    m_Category_idIsSet = false;
}
utility::string_t Process_attributes::getSubCategoryId() const
{
	return m_Sub_category_id;
}
void Process_attributes::setSubCategoryId(utility::string_t value)
{
	m_Sub_category_id = value;
    m_Sub_category_idIsSet = true;
}
bool Process_attributes::sub_category_idIsSet() const
{
    return m_Sub_category_idIsSet;
}
void Process_attributes::unsetSub_category_id() 
{
    m_Sub_category_idIsSet = false;
}
utility::string_t Process_attributes::getCreateUserId() const
{
	return m_Create_user_id;
}
void Process_attributes::setCreateUserId(utility::string_t value)
{
	m_Create_user_id = value;
    m_Create_user_idIsSet = true;
}
bool Process_attributes::create_user_idIsSet() const
{
    return m_Create_user_idIsSet;
}
void Process_attributes::unsetCreate_user_id() 
{
    m_Create_user_idIsSet = false;
}
bool Process_attributes::getDebug() const
{
	return m_Debug;
}
void Process_attributes::setDebug(bool value)
{
	m_Debug = value;
    m_DebugIsSet = true;
}
bool Process_attributes::debugIsSet() const
{
    return m_DebugIsSet;
}
void Process_attributes::unsetDebug() 
{
    m_DebugIsSet = false;
}
utility::string_t Process_attributes::getDynaformSummaryId() const
{
	return m_Dynaform_summary_id;
}
void Process_attributes::setDynaformSummaryId(utility::string_t value)
{
	m_Dynaform_summary_id = value;
    m_Dynaform_summary_idIsSet = true;
}
bool Process_attributes::dynaform_summary_idIsSet() const
{
    return m_Dynaform_summary_idIsSet;
}
void Process_attributes::unsetDynaform_summary_id() 
{
    m_Dynaform_summary_idIsSet = false;
}
utility::string_t Process_attributes::getCreatedAt() const
{
	return m_Created_at;
}
void Process_attributes::setCreatedAt(utility::string_t value)
{
	m_Created_at = value;
    m_Created_atIsSet = true;
}
bool Process_attributes::created_atIsSet() const
{
    return m_Created_atIsSet;
}
void Process_attributes::unsetCreated_at() 
{
    m_Created_atIsSet = false;
}
utility::string_t Process_attributes::getUpdatedAt() const
{
	return m_Updated_at;
}
void Process_attributes::setUpdatedAt(utility::string_t value)
{
	m_Updated_at = value;
    m_Updated_atIsSet = true;
}
bool Process_attributes::updated_atIsSet() const
{
    return m_Updated_atIsSet;
}
void Process_attributes::unsetUpdated_at() 
{
    m_Updated_atIsSet = false;
}

}
}
}
}

