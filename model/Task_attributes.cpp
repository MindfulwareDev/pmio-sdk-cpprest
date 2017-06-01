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



#include "Task_attributes.h"

namespace io {
namespace processmaker {
namespace pmio {
namespace model {

Task_attributes::Task_attributes()
{
    m_Name = U("");
    m_Description = U("");
    m_DescriptionIsSet = false;
    m_Process_id = U("");
    m_Type = U("");
    m_Assign_type = U("");
    m_Priority_variable = U("");
    m_Priority_variableIsSet = false;
    m_Assign_variable = U("");
    m_Assign_variableIsSet = false;
    m_Group_variable = U("");
    m_Group_variableIsSet = false;
    m_Mi_instance_variable = U("");
    m_Mi_instance_variableIsSet = false;
    m_Mi_complete_variable = U("");
    m_Mi_complete_variableIsSet = false;
    m_Transfer_fly = false;
    m_Can_upload = false;
    m_View_upload = false;
    m_View_additional_documentation = false;
    m_Start = false;
    m_Send_last_email = false;
    m_Derivation_screen_tpl = U("");
    m_Derivation_screen_tplIsSet = false;
    m_Selfservice_timeout = nullptr;
    m_Selfservice_time = U("");
    m_Selfservice_timeIsSet = false;
    m_Selfservice_time_unit = U("");
    m_Selfservice_time_unitIsSet = false;
    m_Selfservice_execution = U("");
    m_Selfservice_executionIsSet = false;
    m_Last_assigned_user_id = U("");
    m_Last_assigned_user_idIsSet = false;
    m_Script = U("");
    m_ScriptIsSet = false;
    m_Created_at = U("");
    m_Created_atIsSet = false;
    m_Updated_at = U("");
    m_Updated_atIsSet = false;
    
}

Task_attributes::~Task_attributes()
{
}

void Task_attributes::validate() 
{
    // TODO: implement validation
}

web::json::value Task_attributes::toJson() const
{
    web::json::value val = web::json::value::object();
     
	val[U("name")] = ModelBase::toJson(m_Name);
    if(m_DescriptionIsSet)
    {
        val[U("description")] = ModelBase::toJson(m_Description);
    }
    val[U("process_id")] = ModelBase::toJson(m_Process_id);
    val[U("type")] = ModelBase::toJson(m_Type);
    val[U("assign_type")] = ModelBase::toJson(m_Assign_type);
    if(m_Priority_variableIsSet)
    {
        val[U("priority_variable")] = ModelBase::toJson(m_Priority_variable);
    }
    if(m_Assign_variableIsSet)
    {
        val[U("assign_variable")] = ModelBase::toJson(m_Assign_variable);
    }
    if(m_Group_variableIsSet)
    {
        val[U("group_variable")] = ModelBase::toJson(m_Group_variable);
    }
    if(m_Mi_instance_variableIsSet)
    {
        val[U("mi_instance_variable")] = ModelBase::toJson(m_Mi_instance_variable);
    }
    if(m_Mi_complete_variableIsSet)
    {
        val[U("mi_complete_variable")] = ModelBase::toJson(m_Mi_complete_variable);
    }
    val[U("transfer_fly")] = ModelBase::toJson(m_Transfer_fly);
    val[U("can_upload")] = ModelBase::toJson(m_Can_upload);
    val[U("view_upload")] = ModelBase::toJson(m_View_upload);
    val[U("view_additional_documentation")] = ModelBase::toJson(m_View_additional_documentation);
    val[U("start")] = ModelBase::toJson(m_Start);
    val[U("send_last_email")] = ModelBase::toJson(m_Send_last_email);
    if(m_Derivation_screen_tplIsSet)
    {
        val[U("derivation_screen_tpl")] = ModelBase::toJson(m_Derivation_screen_tpl);
    }
    val[U("selfservice_timeout")] = ModelBase::toJson(m_Selfservice_timeout);
    if(m_Selfservice_timeIsSet)
    {
        val[U("selfservice_time")] = ModelBase::toJson(m_Selfservice_time);
    }
    if(m_Selfservice_time_unitIsSet)
    {
        val[U("selfservice_time_unit")] = ModelBase::toJson(m_Selfservice_time_unit);
    }
    if(m_Selfservice_executionIsSet)
    {
        val[U("selfservice_execution")] = ModelBase::toJson(m_Selfservice_execution);
    }
    if(m_Last_assigned_user_idIsSet)
    {
        val[U("last_assigned_user_id")] = ModelBase::toJson(m_Last_assigned_user_id);
    }
    if(m_ScriptIsSet)
    {
        val[U("script")] = ModelBase::toJson(m_Script);
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

void Task_attributes::fromJson(web::json::value& val)
{
    setName(ModelBase::stringFromJson(val[U("name")]));
    if(val.has_field(U("description")))
    {
        setDescription(ModelBase::stringFromJson(val[U("description")]));
                
    }
    setProcessId(ModelBase::stringFromJson(val[U("process_id")]));
    setType(ModelBase::stringFromJson(val[U("type")]));
    setAssignType(ModelBase::stringFromJson(val[U("assign_type")]));
    if(val.has_field(U("priority_variable")))
    {
        setPriorityVariable(ModelBase::stringFromJson(val[U("priority_variable")]));
                
    }
    if(val.has_field(U("assign_variable")))
    {
        setAssignVariable(ModelBase::stringFromJson(val[U("assign_variable")]));
                
    }
    if(val.has_field(U("group_variable")))
    {
        setGroupVariable(ModelBase::stringFromJson(val[U("group_variable")]));
                
    }
    if(val.has_field(U("mi_instance_variable")))
    {
        setMiInstanceVariable(ModelBase::stringFromJson(val[U("mi_instance_variable")]));
                
    }
    if(val.has_field(U("mi_complete_variable")))
    {
        setMiCompleteVariable(ModelBase::stringFromJson(val[U("mi_complete_variable")]));
                
    }
    setTransferFly(ModelBase::boolFromJson(val[U("transfer_fly")]));
    setCanUpload(ModelBase::boolFromJson(val[U("can_upload")]));
    setViewUpload(ModelBase::boolFromJson(val[U("view_upload")]));
    setViewAdditionalDocumentation(ModelBase::boolFromJson(val[U("view_additional_documentation")]));
    setStart(ModelBase::boolFromJson(val[U("start")]));
    setSendLastEmail(ModelBase::boolFromJson(val[U("send_last_email")]));
    if(val.has_field(U("derivation_screen_tpl")))
    {
        setDerivationScreenTpl(ModelBase::stringFromJson(val[U("derivation_screen_tpl")]));
                
    }
    setSelfserviceTimeout(ModelBase::int32_tFromJson(val[U("selfservice_timeout")]));
    if(val.has_field(U("selfservice_time")))
    {
        setSelfserviceTime(ModelBase::stringFromJson(val[U("selfservice_time")]));
                
    }
    if(val.has_field(U("selfservice_time_unit")))
    {
        setSelfserviceTimeUnit(ModelBase::stringFromJson(val[U("selfservice_time_unit")]));
                
    }
    if(val.has_field(U("selfservice_execution")))
    {
        setSelfserviceExecution(ModelBase::stringFromJson(val[U("selfservice_execution")]));
                
    }
    if(val.has_field(U("last_assigned_user_id")))
    {
        setLastAssignedUserId(ModelBase::stringFromJson(val[U("last_assigned_user_id")]));
                
    }
    if(val.has_field(U("script")))
    {
        setScript(ModelBase::stringFromJson(val[U("script")]));
                
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

void Task_attributes::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
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
    multipart->add(ModelBase::toHttpContent(namePrefix + U("process_id"), m_Process_id));
    multipart->add(ModelBase::toHttpContent(namePrefix + U("type"), m_Type));
    multipart->add(ModelBase::toHttpContent(namePrefix + U("assign_type"), m_Assign_type));
    if(m_Priority_variableIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("priority_variable"), m_Priority_variable));
                
    }
    if(m_Assign_variableIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("assign_variable"), m_Assign_variable));
                
    }
    if(m_Group_variableIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("group_variable"), m_Group_variable));
                
    }
    if(m_Mi_instance_variableIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("mi_instance_variable"), m_Mi_instance_variable));
                
    }
    if(m_Mi_complete_variableIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("mi_complete_variable"), m_Mi_complete_variable));
                
    }
    multipart->add(ModelBase::toHttpContent(namePrefix + U("transfer_fly"), m_Transfer_fly));
    multipart->add(ModelBase::toHttpContent(namePrefix + U("can_upload"), m_Can_upload));
    multipart->add(ModelBase::toHttpContent(namePrefix + U("view_upload"), m_View_upload));
    multipart->add(ModelBase::toHttpContent(namePrefix + U("view_additional_documentation"), m_View_additional_documentation));
    multipart->add(ModelBase::toHttpContent(namePrefix + U("start"), m_Start));
    multipart->add(ModelBase::toHttpContent(namePrefix + U("send_last_email"), m_Send_last_email));
    if(m_Derivation_screen_tplIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("derivation_screen_tpl"), m_Derivation_screen_tpl));
                
    }
    multipart->add(ModelBase::toHttpContent(namePrefix + U("selfservice_timeout"), m_Selfservice_timeout));
    if(m_Selfservice_timeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("selfservice_time"), m_Selfservice_time));
                
    }
    if(m_Selfservice_time_unitIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("selfservice_time_unit"), m_Selfservice_time_unit));
                
    }
    if(m_Selfservice_executionIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("selfservice_execution"), m_Selfservice_execution));
                
    }
    if(m_Last_assigned_user_idIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("last_assigned_user_id"), m_Last_assigned_user_id));
                
    }
    if(m_ScriptIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("script"), m_Script));
                
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

void Task_attributes::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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
    setProcessId(ModelBase::stringFromHttpContent(multipart->getContent(U("process_id"))));
    setType(ModelBase::stringFromHttpContent(multipart->getContent(U("type"))));
    setAssignType(ModelBase::stringFromHttpContent(multipart->getContent(U("assign_type"))));
    if(multipart->hasContent(U("priority_variable")))
    {
        setPriorityVariable(ModelBase::stringFromHttpContent(multipart->getContent(U("priority_variable"))));
                
    }
    if(multipart->hasContent(U("assign_variable")))
    {
        setAssignVariable(ModelBase::stringFromHttpContent(multipart->getContent(U("assign_variable"))));
                
    }
    if(multipart->hasContent(U("group_variable")))
    {
        setGroupVariable(ModelBase::stringFromHttpContent(multipart->getContent(U("group_variable"))));
                
    }
    if(multipart->hasContent(U("mi_instance_variable")))
    {
        setMiInstanceVariable(ModelBase::stringFromHttpContent(multipart->getContent(U("mi_instance_variable"))));
                
    }
    if(multipart->hasContent(U("mi_complete_variable")))
    {
        setMiCompleteVariable(ModelBase::stringFromHttpContent(multipart->getContent(U("mi_complete_variable"))));
                
    }
    setTransferFly(ModelBase::boolFromHttpContent(multipart->getContent(U("transfer_fly"))));
    setCanUpload(ModelBase::boolFromHttpContent(multipart->getContent(U("can_upload"))));
    setViewUpload(ModelBase::boolFromHttpContent(multipart->getContent(U("view_upload"))));
    setViewAdditionalDocumentation(ModelBase::boolFromHttpContent(multipart->getContent(U("view_additional_documentation"))));
    setStart(ModelBase::boolFromHttpContent(multipart->getContent(U("start"))));
    setSendLastEmail(ModelBase::boolFromHttpContent(multipart->getContent(U("send_last_email"))));
    if(multipart->hasContent(U("derivation_screen_tpl")))
    {
        setDerivationScreenTpl(ModelBase::stringFromHttpContent(multipart->getContent(U("derivation_screen_tpl"))));
                
    }
    setSelfserviceTimeout(ModelBase::int32_tFromHttpContent(multipart->getContent(U("selfservice_timeout"))));
    if(multipart->hasContent(U("selfservice_time")))
    {
        setSelfserviceTime(ModelBase::stringFromHttpContent(multipart->getContent(U("selfservice_time"))));
                
    }
    if(multipart->hasContent(U("selfservice_time_unit")))
    {
        setSelfserviceTimeUnit(ModelBase::stringFromHttpContent(multipart->getContent(U("selfservice_time_unit"))));
                
    }
    if(multipart->hasContent(U("selfservice_execution")))
    {
        setSelfserviceExecution(ModelBase::stringFromHttpContent(multipart->getContent(U("selfservice_execution"))));
                
    }
    if(multipart->hasContent(U("last_assigned_user_id")))
    {
        setLastAssignedUserId(ModelBase::stringFromHttpContent(multipart->getContent(U("last_assigned_user_id"))));
                
    }
    if(multipart->hasContent(U("script")))
    {
        setScript(ModelBase::stringFromHttpContent(multipart->getContent(U("script"))));
                
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
    
   
utility::string_t Task_attributes::getName() const
{
	return m_Name;
}
void Task_attributes::setName(utility::string_t value)
{
	m_Name = value;
    
}
utility::string_t Task_attributes::getDescription() const
{
	return m_Description;
}
void Task_attributes::setDescription(utility::string_t value)
{
	m_Description = value;
    m_DescriptionIsSet = true;
}
bool Task_attributes::descriptionIsSet() const
{
    return m_DescriptionIsSet;
}
void Task_attributes::unsetDescription() 
{
    m_DescriptionIsSet = false;
}
utility::string_t Task_attributes::getProcessId() const
{
	return m_Process_id;
}
void Task_attributes::setProcessId(utility::string_t value)
{
	m_Process_id = value;
    
}
utility::string_t Task_attributes::getType() const
{
	return m_Type;
}
void Task_attributes::setType(utility::string_t value)
{
	m_Type = value;
    
}
utility::string_t Task_attributes::getAssignType() const
{
	return m_Assign_type;
}
void Task_attributes::setAssignType(utility::string_t value)
{
	m_Assign_type = value;
    
}
utility::string_t Task_attributes::getPriorityVariable() const
{
	return m_Priority_variable;
}
void Task_attributes::setPriorityVariable(utility::string_t value)
{
	m_Priority_variable = value;
    m_Priority_variableIsSet = true;
}
bool Task_attributes::priority_variableIsSet() const
{
    return m_Priority_variableIsSet;
}
void Task_attributes::unsetPriority_variable() 
{
    m_Priority_variableIsSet = false;
}
utility::string_t Task_attributes::getAssignVariable() const
{
	return m_Assign_variable;
}
void Task_attributes::setAssignVariable(utility::string_t value)
{
	m_Assign_variable = value;
    m_Assign_variableIsSet = true;
}
bool Task_attributes::assign_variableIsSet() const
{
    return m_Assign_variableIsSet;
}
void Task_attributes::unsetAssign_variable() 
{
    m_Assign_variableIsSet = false;
}
utility::string_t Task_attributes::getGroupVariable() const
{
	return m_Group_variable;
}
void Task_attributes::setGroupVariable(utility::string_t value)
{
	m_Group_variable = value;
    m_Group_variableIsSet = true;
}
bool Task_attributes::group_variableIsSet() const
{
    return m_Group_variableIsSet;
}
void Task_attributes::unsetGroup_variable() 
{
    m_Group_variableIsSet = false;
}
utility::string_t Task_attributes::getMiInstanceVariable() const
{
	return m_Mi_instance_variable;
}
void Task_attributes::setMiInstanceVariable(utility::string_t value)
{
	m_Mi_instance_variable = value;
    m_Mi_instance_variableIsSet = true;
}
bool Task_attributes::mi_instance_variableIsSet() const
{
    return m_Mi_instance_variableIsSet;
}
void Task_attributes::unsetMi_instance_variable() 
{
    m_Mi_instance_variableIsSet = false;
}
utility::string_t Task_attributes::getMiCompleteVariable() const
{
	return m_Mi_complete_variable;
}
void Task_attributes::setMiCompleteVariable(utility::string_t value)
{
	m_Mi_complete_variable = value;
    m_Mi_complete_variableIsSet = true;
}
bool Task_attributes::mi_complete_variableIsSet() const
{
    return m_Mi_complete_variableIsSet;
}
void Task_attributes::unsetMi_complete_variable() 
{
    m_Mi_complete_variableIsSet = false;
}
bool Task_attributes::getTransferFly() const
{
	return m_Transfer_fly;
}
void Task_attributes::setTransferFly(bool value)
{
	m_Transfer_fly = value;
    
}
bool Task_attributes::getCanUpload() const
{
	return m_Can_upload;
}
void Task_attributes::setCanUpload(bool value)
{
	m_Can_upload = value;
    
}
bool Task_attributes::getViewUpload() const
{
	return m_View_upload;
}
void Task_attributes::setViewUpload(bool value)
{
	m_View_upload = value;
    
}
bool Task_attributes::getViewAdditionalDocumentation() const
{
	return m_View_additional_documentation;
}
void Task_attributes::setViewAdditionalDocumentation(bool value)
{
	m_View_additional_documentation = value;
    
}
bool Task_attributes::getStart() const
{
	return m_Start;
}
void Task_attributes::setStart(bool value)
{
	m_Start = value;
    
}
bool Task_attributes::getSendLastEmail() const
{
	return m_Send_last_email;
}
void Task_attributes::setSendLastEmail(bool value)
{
	m_Send_last_email = value;
    
}
utility::string_t Task_attributes::getDerivationScreenTpl() const
{
	return m_Derivation_screen_tpl;
}
void Task_attributes::setDerivationScreenTpl(utility::string_t value)
{
	m_Derivation_screen_tpl = value;
    m_Derivation_screen_tplIsSet = true;
}
bool Task_attributes::derivation_screen_tplIsSet() const
{
    return m_Derivation_screen_tplIsSet;
}
void Task_attributes::unsetDerivation_screen_tpl() 
{
    m_Derivation_screen_tplIsSet = false;
}
int32_t Task_attributes::getSelfserviceTimeout() const
{
	return m_Selfservice_timeout;
}
void Task_attributes::setSelfserviceTimeout(int32_t value)
{
	m_Selfservice_timeout = value;
    
}
utility::string_t Task_attributes::getSelfserviceTime() const
{
	return m_Selfservice_time;
}
void Task_attributes::setSelfserviceTime(utility::string_t value)
{
	m_Selfservice_time = value;
    m_Selfservice_timeIsSet = true;
}
bool Task_attributes::selfservice_timeIsSet() const
{
    return m_Selfservice_timeIsSet;
}
void Task_attributes::unsetSelfservice_time() 
{
    m_Selfservice_timeIsSet = false;
}
utility::string_t Task_attributes::getSelfserviceTimeUnit() const
{
	return m_Selfservice_time_unit;
}
void Task_attributes::setSelfserviceTimeUnit(utility::string_t value)
{
	m_Selfservice_time_unit = value;
    m_Selfservice_time_unitIsSet = true;
}
bool Task_attributes::selfservice_time_unitIsSet() const
{
    return m_Selfservice_time_unitIsSet;
}
void Task_attributes::unsetSelfservice_time_unit() 
{
    m_Selfservice_time_unitIsSet = false;
}
utility::string_t Task_attributes::getSelfserviceExecution() const
{
	return m_Selfservice_execution;
}
void Task_attributes::setSelfserviceExecution(utility::string_t value)
{
	m_Selfservice_execution = value;
    m_Selfservice_executionIsSet = true;
}
bool Task_attributes::selfservice_executionIsSet() const
{
    return m_Selfservice_executionIsSet;
}
void Task_attributes::unsetSelfservice_execution() 
{
    m_Selfservice_executionIsSet = false;
}
utility::string_t Task_attributes::getLastAssignedUserId() const
{
	return m_Last_assigned_user_id;
}
void Task_attributes::setLastAssignedUserId(utility::string_t value)
{
	m_Last_assigned_user_id = value;
    m_Last_assigned_user_idIsSet = true;
}
bool Task_attributes::last_assigned_user_idIsSet() const
{
    return m_Last_assigned_user_idIsSet;
}
void Task_attributes::unsetLast_assigned_user_id() 
{
    m_Last_assigned_user_idIsSet = false;
}
utility::string_t Task_attributes::getScript() const
{
	return m_Script;
}
void Task_attributes::setScript(utility::string_t value)
{
	m_Script = value;
    m_ScriptIsSet = true;
}
bool Task_attributes::scriptIsSet() const
{
    return m_ScriptIsSet;
}
void Task_attributes::unsetScript() 
{
    m_ScriptIsSet = false;
}
utility::string_t Task_attributes::getCreatedAt() const
{
	return m_Created_at;
}
void Task_attributes::setCreatedAt(utility::string_t value)
{
	m_Created_at = value;
    m_Created_atIsSet = true;
}
bool Task_attributes::created_atIsSet() const
{
    return m_Created_atIsSet;
}
void Task_attributes::unsetCreated_at() 
{
    m_Created_atIsSet = false;
}
utility::string_t Task_attributes::getUpdatedAt() const
{
	return m_Updated_at;
}
void Task_attributes::setUpdatedAt(utility::string_t value)
{
	m_Updated_at = value;
    m_Updated_atIsSet = true;
}
bool Task_attributes::updated_atIsSet() const
{
    return m_Updated_atIsSet;
}
void Task_attributes::unsetUpdated_at() 
{
    m_Updated_atIsSet = false;
}

}
}
}
}

