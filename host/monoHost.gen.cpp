// Do not edit this directly; if there are changes needed, edit the codegen and regenerate
// Do not compile this directly, it's only meant to be included in monoHost.cpp
int dotts3::host::mono_host::plugin_offersConfigure(size_t hostPluginID)
{
	return 0;
}
void dotts3::host::mono_host::plugin_configure(size_t hostPluginID, void* handle, void* qParentWidget)
{
	
}
void dotts3::host::mono_host::plugin_registerPluginID(size_t hostPluginID, const char* id)
{
	
}
int dotts3::host::mono_host::plugin_processCommand(size_t hostPluginID, uint64_t serverConnectionHandlerID, const char* command)
{
	return 0;
}
void dotts3::host::mono_host::plugin_currentServerConnectionChanged(size_t hostPluginID, uint64_t serverConnectionHandlerID)
{
	
}
int dotts3::host::mono_host::plugin_requestAutoload(size_t hostPluginID)
{
	return 0;
}
void dotts3::host::mono_host::plugin_onConnectStatusChangeEvent(size_t hostPluginID, uint64_t serverConnectionHandlerID, unsigned int errorNumber)
{
	
}
void dotts3::host::mono_host::plugin_onNewChannelEvent(size_t hostPluginID, uint64_t serverConnectionHandlerID, uint64_t channelParentID)
{
	
}
void dotts3::host::mono_host::plugin_onNewChannelCreatedEvent(size_t hostPluginID, uint64_t serverConnectionHandlerID, const char* invokerUniqueIdentifier)
{
	
}
void dotts3::host::mono_host::plugin_onDelChannelEvent(size_t hostPluginID, uint64_t serverConnectionHandlerID, const char* invokerUniqueIdentifier)
{
	
}
void dotts3::host::mono_host::plugin_onChannelMoveEvent(size_t hostPluginID, uint64_t serverConnectionHandlerID, const char* invokerUniqueIdentifier)
{
	
}
void dotts3::host::mono_host::plugin_onUpdateChannelEvent(size_t hostPluginID, uint64_t serverConnectionHandlerID, uint64_t channelID)
{
	
}
void dotts3::host::mono_host::plugin_onUpdateChannelEditedEvent(size_t hostPluginID, uint64_t serverConnectionHandlerID, const char* invokerUniqueIdentifier)
{
	
}
void dotts3::host::mono_host::plugin_onUpdateClientEvent(size_t hostPluginID, uint64_t serverConnectionHandlerID, const char* invokerUniqueIdentifier)
{
	
}
void dotts3::host::mono_host::plugin_onClientMoveEvent(size_t hostPluginID, uint64_t serverConnectionHandlerID, const char* moveMessage)
{
	
}
void dotts3::host::mono_host::plugin_onClientMoveSubscriptionEvent(size_t hostPluginID, uint64_t serverConnectionHandlerID, int visibility)
{
	
}
void dotts3::host::mono_host::plugin_onClientMoveTimeoutEvent(size_t hostPluginID, uint64_t serverConnectionHandlerID, const char* timeoutMessage)
{
	
}
void dotts3::host::mono_host::plugin_onClientMoveMovedEvent(size_t hostPluginID, uint64_t serverConnectionHandlerID, const char* moveMessage)
{
	
}
void dotts3::host::mono_host::plugin_onClientKickFromChannelEvent(size_t hostPluginID, uint64_t serverConnectionHandlerID, const char* kickMessage)
{
	
}
void dotts3::host::mono_host::plugin_onClientKickFromServerEvent(size_t hostPluginID, uint64_t serverConnectionHandlerID, const char* kickMessage)
{
	
}
void dotts3::host::mono_host::plugin_onClientIDsEvent(size_t hostPluginID, uint64_t serverConnectionHandlerID, const char* clientName)
{
	
}
void dotts3::host::mono_host::plugin_onClientIDsFinishedEvent(size_t hostPluginID, uint64_t serverConnectionHandlerID)
{
	
}
void dotts3::host::mono_host::plugin_onServerEditedEvent(size_t hostPluginID, uint64_t serverConnectionHandlerID, const char* editerUniqueIdentifier)
{
	
}
void dotts3::host::mono_host::plugin_onServerUpdatedEvent(size_t hostPluginID, uint64_t serverConnectionHandlerID)
{
	
}
int  dotts3::host::mono_host::plugin_onServerErrorEvent(size_t hostPluginID, uint64_t serverConnectionHandlerID, const char* extraMessage)
{
	return 0;
}
void dotts3::host::mono_host::plugin_onServerStopEvent(size_t hostPluginID, uint64_t serverConnectionHandlerID, const char* shutdownMessage)
{
	
}
int  dotts3::host::mono_host::plugin_onTextMessageEvent(size_t hostPluginID, uint64_t serverConnectionHandlerID, int ffIgnored)
{
	return 0;
}
void dotts3::host::mono_host::plugin_onTalkStatusChangeEvent(size_t hostPluginID, uint64_t serverConnectionHandlerID, uint16_t clientID)
{
	
}
void dotts3::host::mono_host::plugin_onConnectionInfoEvent(size_t hostPluginID, uint64_t serverConnectionHandlerID, uint16_t clientID)
{
	
}
void dotts3::host::mono_host::plugin_onServerConnectionInfoEvent(size_t hostPluginID, uint64_t serverConnectionHandlerID)
{
	
}
void dotts3::host::mono_host::plugin_onChannelSubscribeEvent(size_t hostPluginID, uint64_t serverConnectionHandlerID, uint64_t channelID)
{
	
}
void dotts3::host::mono_host::plugin_onChannelSubscribeFinishedEvent(size_t hostPluginID, uint64_t serverConnectionHandlerID)
{
	
}
void dotts3::host::mono_host::plugin_onChannelUnsubscribeEvent(size_t hostPluginID, uint64_t serverConnectionHandlerID, uint64_t channelID)
{
	
}
void dotts3::host::mono_host::plugin_onChannelUnsubscribeFinishedEvent(size_t hostPluginID, uint64_t serverConnectionHandlerID)
{
	
}
void dotts3::host::mono_host::plugin_onChannelDescriptionUpdateEvent(size_t hostPluginID, uint64_t serverConnectionHandlerID, uint64_t channelID)
{
	
}
void dotts3::host::mono_host::plugin_onChannelPasswordChangedEvent(size_t hostPluginID, uint64_t serverConnectionHandlerID, uint64_t channelID)
{
	
}
void dotts3::host::mono_host::plugin_onPlaybackShutdownCompleteEvent(size_t hostPluginID, uint64_t serverConnectionHandlerID)
{
	
}
void dotts3::host::mono_host::plugin_onSoundDeviceListChangedEvent(size_t hostPluginID, const char* modeID, int playOrCap)
{
	
}
void dotts3::host::mono_host::plugin_onEditPlaybackVoiceDataEvent(size_t hostPluginID, uint64_t serverConnectionHandlerID, int channels)
{
	
}
void dotts3::host::mono_host::plugin_onEditPostProcessVoiceDataEvent(size_t hostPluginID, uint64_t serverConnectionHandlerID, unsigned int* channelFillMask)
{
	
}
void dotts3::host::mono_host::plugin_onEditMixedPlaybackVoiceDataEvent(size_t hostPluginID, uint64_t serverConnectionHandlerID, unsigned int* channelFillMask)
{
	
}
void dotts3::host::mono_host::plugin_onEditCapturedVoiceDataEvent(size_t hostPluginID, uint64_t serverConnectionHandlerID, int* edited)
{
	
}
void dotts3::host::mono_host::plugin_onCustom3dRolloffCalculationClientEvent(size_t hostPluginID, uint64_t serverConnectionHandlerID, float* volume)
{
	
}
void dotts3::host::mono_host::plugin_onCustom3dRolloffCalculationWaveEvent(size_t hostPluginID, uint64_t serverConnectionHandlerID, float* volume)
{
	
}
void dotts3::host::mono_host::plugin_onUserLoggingMessageEvent(size_t hostPluginID, const char* logMessage, const char* completeLogString)
{
	
}
void dotts3::host::mono_host::plugin_onClientBanFromServerEvent(size_t hostPluginID, uint64_t serverConnectionHandlerID, const char* kickMessage)
{
	
}
int  dotts3::host::mono_host::plugin_onClientPokeEvent(size_t hostPluginID, uint64_t serverConnectionHandlerID, int ffIgnored)
{
	return 0;
}
void dotts3::host::mono_host::plugin_onClientSelfVariableUpdateEvent(size_t hostPluginID, uint64_t serverConnectionHandlerID, const char* newValue)
{
	
}
void dotts3::host::mono_host::plugin_onFileListEvent(size_t hostPluginID, uint64_t serverConnectionHandlerID, const char* returnCode)
{
	
}
void dotts3::host::mono_host::plugin_onFileListFinishedEvent(size_t hostPluginID, uint64_t serverConnectionHandlerID, const char* path)
{
	
}
void dotts3::host::mono_host::plugin_onFileInfoEvent(size_t hostPluginID, uint64_t serverConnectionHandlerID, uint64_t datetime)
{
	
}
void dotts3::host::mono_host::plugin_onServerGroupListEvent(size_t hostPluginID, uint64_t serverConnectionHandlerID, int saveDB)
{
	
}
void dotts3::host::mono_host::plugin_onServerGroupListFinishedEvent(size_t hostPluginID, uint64_t serverConnectionHandlerID)
{
	
}
void dotts3::host::mono_host::plugin_onServerGroupByClientIDEvent(size_t hostPluginID, uint64_t serverConnectionHandlerID, uint64_t clientDatabaseID)
{
	
}
void dotts3::host::mono_host::plugin_onServerGroupPermListEvent(size_t hostPluginID, uint64_t serverConnectionHandlerID, int permissionSkip)
{
	
}
void dotts3::host::mono_host::plugin_onServerGroupPermListFinishedEvent(size_t hostPluginID, uint64_t serverConnectionHandlerID, uint64_t serverGroupID)
{
	
}
void dotts3::host::mono_host::plugin_onServerGroupClientListEvent(size_t hostPluginID, uint64_t serverConnectionHandlerID, const char* clientUniqueID)
{
	
}
void dotts3::host::mono_host::plugin_onChannelGroupListEvent(size_t hostPluginID, uint64_t serverConnectionHandlerID, int saveDB)
{
	
}
void dotts3::host::mono_host::plugin_onChannelGroupListFinishedEvent(size_t hostPluginID, uint64_t serverConnectionHandlerID)
{
	
}
void dotts3::host::mono_host::plugin_onChannelGroupPermListEvent(size_t hostPluginID, uint64_t serverConnectionHandlerID, int permissionSkip)
{
	
}
void dotts3::host::mono_host::plugin_onChannelGroupPermListFinishedEvent(size_t hostPluginID, uint64_t serverConnectionHandlerID, uint64_t channelGroupID)
{
	
}
void dotts3::host::mono_host::plugin_onChannelPermListEvent(size_t hostPluginID, uint64_t serverConnectionHandlerID, int permissionSkip)
{
	
}
void dotts3::host::mono_host::plugin_onChannelPermListFinishedEvent(size_t hostPluginID, uint64_t serverConnectionHandlerID, uint64_t channelID)
{
	
}
void dotts3::host::mono_host::plugin_onClientPermListEvent(size_t hostPluginID, uint64_t serverConnectionHandlerID, int permissionSkip)
{
	
}
void dotts3::host::mono_host::plugin_onClientPermListFinishedEvent(size_t hostPluginID, uint64_t serverConnectionHandlerID, uint64_t clientDatabaseID)
{
	
}
void dotts3::host::mono_host::plugin_onChannelClientPermListEvent(size_t hostPluginID, uint64_t serverConnectionHandlerID, int permissionSkip)
{
	
}
void dotts3::host::mono_host::plugin_onChannelClientPermListFinishedEvent(size_t hostPluginID, uint64_t serverConnectionHandlerID, uint64_t clientDatabaseID)
{
	
}
void dotts3::host::mono_host::plugin_onClientChannelGroupChangedEvent(size_t hostPluginID, uint64_t serverConnectionHandlerID, const char* invokerUniqueIdentity)
{
	
}
int  dotts3::host::mono_host::plugin_onServerPermissionErrorEvent(size_t hostPluginID, uint64_t serverConnectionHandlerID, unsigned int failedPermissionID)
{
	return 0;
}
void dotts3::host::mono_host::plugin_onPermissionListGroupEndIDEvent(size_t hostPluginID, uint64_t serverConnectionHandlerID, unsigned int groupEndID)
{
	
}
void dotts3::host::mono_host::plugin_onPermissionListEvent(size_t hostPluginID, uint64_t serverConnectionHandlerID, const char* permissionDescription)
{
	
}
void dotts3::host::mono_host::plugin_onPermissionListFinishedEvent(size_t hostPluginID, uint64_t serverConnectionHandlerID)
{
	
}
void dotts3::host::mono_host::plugin_onPermissionOverviewEvent(size_t hostPluginID, uint64_t serverConnectionHandlerID, int permissionSkip)
{
	
}
void dotts3::host::mono_host::plugin_onPermissionOverviewFinishedEvent(size_t hostPluginID, uint64_t serverConnectionHandlerID)
{
	
}
void dotts3::host::mono_host::plugin_onServerGroupClientAddedEvent(size_t hostPluginID, uint64_t serverConnectionHandlerID, const char* invokerUniqueIdentity)
{
	
}
void dotts3::host::mono_host::plugin_onServerGroupClientDeletedEvent(size_t hostPluginID, uint64_t serverConnectionHandlerID, const char* invokerUniqueIdentity)
{
	
}
void dotts3::host::mono_host::plugin_onClientNeededPermissionsEvent(size_t hostPluginID, uint64_t serverConnectionHandlerID, int permissionValue)
{
	
}
void dotts3::host::mono_host::plugin_onClientNeededPermissionsFinishedEvent(size_t hostPluginID, uint64_t serverConnectionHandlerID)
{
	
}
void dotts3::host::mono_host::plugin_onFileTransferStatusEvent(size_t hostPluginID, uint16_t transferID, uint64_t serverConnectionHandlerID)
{
	
}
void dotts3::host::mono_host::plugin_onClientChatClosedEvent(size_t hostPluginID, uint64_t serverConnectionHandlerID, const char* clientUniqueIdentity)
{
	
}
void dotts3::host::mono_host::plugin_onClientChatComposingEvent(size_t hostPluginID, uint64_t serverConnectionHandlerID, const char* clientUniqueIdentity)
{
	
}
void dotts3::host::mono_host::plugin_onServerLogEvent(size_t hostPluginID, uint64_t serverConnectionHandlerID, const char* logMsg)
{
	
}
void dotts3::host::mono_host::plugin_onServerLogFinishedEvent(size_t hostPluginID, uint64_t serverConnectionHandlerID, uint64_t fileSize)
{
	
}
void dotts3::host::mono_host::plugin_onMessageListEvent(size_t hostPluginID, uint64_t serverConnectionHandlerID, int flagRead)
{
	
}
void dotts3::host::mono_host::plugin_onMessageGetEvent(size_t hostPluginID, uint64_t serverConnectionHandlerID, uint64_t timestamp)
{
	
}
void dotts3::host::mono_host::plugin_onClientDBIDfromUIDEvent(size_t hostPluginID, uint64_t serverConnectionHandlerID, uint64_t clientDatabaseID)
{
	
}
void dotts3::host::mono_host::plugin_onClientNamefromUIDEvent(size_t hostPluginID, uint64_t serverConnectionHandlerID, const char* clientNickName)
{
	
}
void dotts3::host::mono_host::plugin_onClientNamefromDBIDEvent(size_t hostPluginID, uint64_t serverConnectionHandlerID, const char* clientNickName)
{
	
}
void dotts3::host::mono_host::plugin_onComplainListEvent(size_t hostPluginID, uint64_t serverConnectionHandlerID, uint64_t timestamp)
{
	
}
void dotts3::host::mono_host::plugin_onBanListEvent(size_t hostPluginID, uint64_t serverConnectionHandlerID, const char* lastNickName)
{
	
}
void dotts3::host::mono_host::plugin_onClientServerQueryLoginPasswordEvent(size_t hostPluginID, uint64_t serverConnectionHandlerID, const char* loginPassword)
{
	
}
void dotts3::host::mono_host::plugin_onPluginCommandEvent(size_t hostPluginID, uint64_t serverConnectionHandlerID, const char* pluginCommand)
{
	
}
void dotts3::host::mono_host::plugin_onIncomingClientQueryEvent(size_t hostPluginID, uint64_t serverConnectionHandlerID, const char* commandText)
{
	
}
void dotts3::host::mono_host::plugin_onServerTemporaryPasswordListEvent(size_t hostPluginID, uint64_t serverConnectionHandlerID, const char* targetChannelPW)
{
	
}
void dotts3::host::mono_host::plugin_onAvatarUpdated(size_t hostPluginID, uint64_t serverConnectionHandlerID, const char* avatarPath)
{
	
}
void dotts3::host::mono_host::plugin_onHotkeyEvent(size_t hostPluginID, const char* keyword)
{
	
}
void dotts3::host::mono_host::plugin_onHotkeyRecordedEvent(size_t hostPluginID, const char* keyword, const char* key)
{
	
}
void dotts3::host::mono_host::plugin_onClientDisplayNameChanged(size_t hostPluginID, uint64_t serverConnectionHandlerID, const char* uniqueClientIdentifier)
{
	
}
