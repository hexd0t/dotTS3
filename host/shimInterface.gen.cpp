// Do not edit this directly; if there are changes needed, edit the codegen and regenerate
// Do not compile this directly, it's only meant to be included in shimInterface.cpp
int plugin_offersConfigure(size_t hostPluginID)
{
	return MONOHOST->plugin_offersConfigure( hostPluginID );
}
void plugin_configure(size_t hostPluginID, void* handle, void* qParentWidget)
{
	MONOHOST->plugin_configure( hostPluginID, handle, qParentWidget );
}
void plugin_registerPluginID(size_t hostPluginID, const char* id)
{
	MONOHOST->plugin_registerPluginID( hostPluginID, id );
}
int plugin_processCommand(size_t hostPluginID, uint64_t serverConnectionHandlerID, const char* command)
{
	return MONOHOST->plugin_processCommand( hostPluginID, serverConnectionHandlerID, command );
}
void plugin_currentServerConnectionChanged(size_t hostPluginID, uint64_t serverConnectionHandlerID)
{
	MONOHOST->plugin_currentServerConnectionChanged( hostPluginID, serverConnectionHandlerID );
}
int plugin_requestAutoload(size_t hostPluginID)
{
	return MONOHOST->plugin_requestAutoload( hostPluginID );
}
void plugin_onConnectStatusChangeEvent(size_t hostPluginID, uint64_t serverConnectionHandlerID, unsigned int errorNumber)
{
	MONOHOST->plugin_onConnectStatusChangeEvent( hostPluginID, serverConnectionHandlerID, errorNumber );
}
void plugin_onNewChannelEvent(size_t hostPluginID, uint64_t serverConnectionHandlerID, uint64_t channelParentID)
{
	MONOHOST->plugin_onNewChannelEvent( hostPluginID, serverConnectionHandlerID, channelParentID );
}
void plugin_onNewChannelCreatedEvent(size_t hostPluginID, uint64_t serverConnectionHandlerID, const char* invokerUniqueIdentifier)
{
	MONOHOST->plugin_onNewChannelCreatedEvent( hostPluginID, serverConnectionHandlerID, invokerUniqueIdentifier );
}
void plugin_onDelChannelEvent(size_t hostPluginID, uint64_t serverConnectionHandlerID, const char* invokerUniqueIdentifier)
{
	MONOHOST->plugin_onDelChannelEvent( hostPluginID, serverConnectionHandlerID, invokerUniqueIdentifier );
}
void plugin_onChannelMoveEvent(size_t hostPluginID, uint64_t serverConnectionHandlerID, const char* invokerUniqueIdentifier)
{
	MONOHOST->plugin_onChannelMoveEvent( hostPluginID, serverConnectionHandlerID, invokerUniqueIdentifier );
}
void plugin_onUpdateChannelEvent(size_t hostPluginID, uint64_t serverConnectionHandlerID, uint64_t channelID)
{
	MONOHOST->plugin_onUpdateChannelEvent( hostPluginID, serverConnectionHandlerID, channelID );
}
void plugin_onUpdateChannelEditedEvent(size_t hostPluginID, uint64_t serverConnectionHandlerID, const char* invokerUniqueIdentifier)
{
	MONOHOST->plugin_onUpdateChannelEditedEvent( hostPluginID, serverConnectionHandlerID, invokerUniqueIdentifier );
}
void plugin_onUpdateClientEvent(size_t hostPluginID, uint64_t serverConnectionHandlerID, const char* invokerUniqueIdentifier)
{
	MONOHOST->plugin_onUpdateClientEvent( hostPluginID, serverConnectionHandlerID, invokerUniqueIdentifier );
}
void plugin_onClientMoveEvent(size_t hostPluginID, uint64_t serverConnectionHandlerID, const char* moveMessage)
{
	MONOHOST->plugin_onClientMoveEvent( hostPluginID, serverConnectionHandlerID, moveMessage );
}
void plugin_onClientMoveSubscriptionEvent(size_t hostPluginID, uint64_t serverConnectionHandlerID, int visibility)
{
	MONOHOST->plugin_onClientMoveSubscriptionEvent( hostPluginID, serverConnectionHandlerID, visibility );
}
void plugin_onClientMoveTimeoutEvent(size_t hostPluginID, uint64_t serverConnectionHandlerID, const char* timeoutMessage)
{
	MONOHOST->plugin_onClientMoveTimeoutEvent( hostPluginID, serverConnectionHandlerID, timeoutMessage );
}
void plugin_onClientMoveMovedEvent(size_t hostPluginID, uint64_t serverConnectionHandlerID, const char* moveMessage)
{
	MONOHOST->plugin_onClientMoveMovedEvent( hostPluginID, serverConnectionHandlerID, moveMessage );
}
void plugin_onClientKickFromChannelEvent(size_t hostPluginID, uint64_t serverConnectionHandlerID, const char* kickMessage)
{
	MONOHOST->plugin_onClientKickFromChannelEvent( hostPluginID, serverConnectionHandlerID, kickMessage );
}
void plugin_onClientKickFromServerEvent(size_t hostPluginID, uint64_t serverConnectionHandlerID, const char* kickMessage)
{
	MONOHOST->plugin_onClientKickFromServerEvent( hostPluginID, serverConnectionHandlerID, kickMessage );
}
void plugin_onClientIDsEvent(size_t hostPluginID, uint64_t serverConnectionHandlerID, const char* clientName)
{
	MONOHOST->plugin_onClientIDsEvent( hostPluginID, serverConnectionHandlerID, clientName );
}
void plugin_onClientIDsFinishedEvent(size_t hostPluginID, uint64_t serverConnectionHandlerID)
{
	MONOHOST->plugin_onClientIDsFinishedEvent( hostPluginID, serverConnectionHandlerID );
}
void plugin_onServerEditedEvent(size_t hostPluginID, uint64_t serverConnectionHandlerID, const char* editerUniqueIdentifier)
{
	MONOHOST->plugin_onServerEditedEvent( hostPluginID, serverConnectionHandlerID, editerUniqueIdentifier );
}
void plugin_onServerUpdatedEvent(size_t hostPluginID, uint64_t serverConnectionHandlerID)
{
	MONOHOST->plugin_onServerUpdatedEvent( hostPluginID, serverConnectionHandlerID );
}
int  plugin_onServerErrorEvent(size_t hostPluginID, uint64_t serverConnectionHandlerID, const char* extraMessage)
{
	return MONOHOST->plugin_onServerErrorEvent( hostPluginID, serverConnectionHandlerID, extraMessage );
}
void plugin_onServerStopEvent(size_t hostPluginID, uint64_t serverConnectionHandlerID, const char* shutdownMessage)
{
	MONOHOST->plugin_onServerStopEvent( hostPluginID, serverConnectionHandlerID, shutdownMessage );
}
int  plugin_onTextMessageEvent(size_t hostPluginID, uint64_t serverConnectionHandlerID, int ffIgnored)
{
	return MONOHOST->plugin_onTextMessageEvent( hostPluginID, serverConnectionHandlerID, ffIgnored );
}
void plugin_onTalkStatusChangeEvent(size_t hostPluginID, uint64_t serverConnectionHandlerID, uint16_t clientID)
{
	MONOHOST->plugin_onTalkStatusChangeEvent( hostPluginID, serverConnectionHandlerID, clientID );
}
void plugin_onConnectionInfoEvent(size_t hostPluginID, uint64_t serverConnectionHandlerID, uint16_t clientID)
{
	MONOHOST->plugin_onConnectionInfoEvent( hostPluginID, serverConnectionHandlerID, clientID );
}
void plugin_onServerConnectionInfoEvent(size_t hostPluginID, uint64_t serverConnectionHandlerID)
{
	MONOHOST->plugin_onServerConnectionInfoEvent( hostPluginID, serverConnectionHandlerID );
}
void plugin_onChannelSubscribeEvent(size_t hostPluginID, uint64_t serverConnectionHandlerID, uint64_t channelID)
{
	MONOHOST->plugin_onChannelSubscribeEvent( hostPluginID, serverConnectionHandlerID, channelID );
}
void plugin_onChannelSubscribeFinishedEvent(size_t hostPluginID, uint64_t serverConnectionHandlerID)
{
	MONOHOST->plugin_onChannelSubscribeFinishedEvent( hostPluginID, serverConnectionHandlerID );
}
void plugin_onChannelUnsubscribeEvent(size_t hostPluginID, uint64_t serverConnectionHandlerID, uint64_t channelID)
{
	MONOHOST->plugin_onChannelUnsubscribeEvent( hostPluginID, serverConnectionHandlerID, channelID );
}
void plugin_onChannelUnsubscribeFinishedEvent(size_t hostPluginID, uint64_t serverConnectionHandlerID)
{
	MONOHOST->plugin_onChannelUnsubscribeFinishedEvent( hostPluginID, serverConnectionHandlerID );
}
void plugin_onChannelDescriptionUpdateEvent(size_t hostPluginID, uint64_t serverConnectionHandlerID, uint64_t channelID)
{
	MONOHOST->plugin_onChannelDescriptionUpdateEvent( hostPluginID, serverConnectionHandlerID, channelID );
}
void plugin_onChannelPasswordChangedEvent(size_t hostPluginID, uint64_t serverConnectionHandlerID, uint64_t channelID)
{
	MONOHOST->plugin_onChannelPasswordChangedEvent( hostPluginID, serverConnectionHandlerID, channelID );
}
void plugin_onPlaybackShutdownCompleteEvent(size_t hostPluginID, uint64_t serverConnectionHandlerID)
{
	MONOHOST->plugin_onPlaybackShutdownCompleteEvent( hostPluginID, serverConnectionHandlerID );
}
void plugin_onSoundDeviceListChangedEvent(size_t hostPluginID, const char* modeID, int playOrCap)
{
	MONOHOST->plugin_onSoundDeviceListChangedEvent( hostPluginID, modeID, playOrCap );
}
void plugin_onEditPlaybackVoiceDataEvent(size_t hostPluginID, uint64_t serverConnectionHandlerID, int channels)
{
	MONOHOST->plugin_onEditPlaybackVoiceDataEvent( hostPluginID, serverConnectionHandlerID, channels );
}
void plugin_onEditPostProcessVoiceDataEvent(size_t hostPluginID, uint64_t serverConnectionHandlerID, unsigned int* channelFillMask)
{
	MONOHOST->plugin_onEditPostProcessVoiceDataEvent( hostPluginID, serverConnectionHandlerID, channelFillMask );
}
void plugin_onEditMixedPlaybackVoiceDataEvent(size_t hostPluginID, uint64_t serverConnectionHandlerID, unsigned int* channelFillMask)
{
	MONOHOST->plugin_onEditMixedPlaybackVoiceDataEvent( hostPluginID, serverConnectionHandlerID, channelFillMask );
}
void plugin_onEditCapturedVoiceDataEvent(size_t hostPluginID, uint64_t serverConnectionHandlerID, int* edited)
{
	MONOHOST->plugin_onEditCapturedVoiceDataEvent( hostPluginID, serverConnectionHandlerID, edited );
}
void plugin_onCustom3dRolloffCalculationClientEvent(size_t hostPluginID, uint64_t serverConnectionHandlerID, float* volume)
{
	MONOHOST->plugin_onCustom3dRolloffCalculationClientEvent( hostPluginID, serverConnectionHandlerID, volume );
}
void plugin_onCustom3dRolloffCalculationWaveEvent(size_t hostPluginID, uint64_t serverConnectionHandlerID, float* volume)
{
	MONOHOST->plugin_onCustom3dRolloffCalculationWaveEvent( hostPluginID, serverConnectionHandlerID, volume );
}
void plugin_onUserLoggingMessageEvent(size_t hostPluginID, const char* logMessage, const char* completeLogString)
{
	MONOHOST->plugin_onUserLoggingMessageEvent( hostPluginID, logMessage, completeLogString );
}
void plugin_onClientBanFromServerEvent(size_t hostPluginID, uint64_t serverConnectionHandlerID, const char* kickMessage)
{
	MONOHOST->plugin_onClientBanFromServerEvent( hostPluginID, serverConnectionHandlerID, kickMessage );
}
int  plugin_onClientPokeEvent(size_t hostPluginID, uint64_t serverConnectionHandlerID, int ffIgnored)
{
	return MONOHOST->plugin_onClientPokeEvent( hostPluginID, serverConnectionHandlerID, ffIgnored );
}
void plugin_onClientSelfVariableUpdateEvent(size_t hostPluginID, uint64_t serverConnectionHandlerID, const char* newValue)
{
	MONOHOST->plugin_onClientSelfVariableUpdateEvent( hostPluginID, serverConnectionHandlerID, newValue );
}
void plugin_onFileListEvent(size_t hostPluginID, uint64_t serverConnectionHandlerID, const char* returnCode)
{
	MONOHOST->plugin_onFileListEvent( hostPluginID, serverConnectionHandlerID, returnCode );
}
void plugin_onFileListFinishedEvent(size_t hostPluginID, uint64_t serverConnectionHandlerID, const char* path)
{
	MONOHOST->plugin_onFileListFinishedEvent( hostPluginID, serverConnectionHandlerID, path );
}
void plugin_onFileInfoEvent(size_t hostPluginID, uint64_t serverConnectionHandlerID, uint64_t datetime)
{
	MONOHOST->plugin_onFileInfoEvent( hostPluginID, serverConnectionHandlerID, datetime );
}
void plugin_onServerGroupListEvent(size_t hostPluginID, uint64_t serverConnectionHandlerID, int saveDB)
{
	MONOHOST->plugin_onServerGroupListEvent( hostPluginID, serverConnectionHandlerID, saveDB );
}
void plugin_onServerGroupListFinishedEvent(size_t hostPluginID, uint64_t serverConnectionHandlerID)
{
	MONOHOST->plugin_onServerGroupListFinishedEvent( hostPluginID, serverConnectionHandlerID );
}
void plugin_onServerGroupByClientIDEvent(size_t hostPluginID, uint64_t serverConnectionHandlerID, uint64_t clientDatabaseID)
{
	MONOHOST->plugin_onServerGroupByClientIDEvent( hostPluginID, serverConnectionHandlerID, clientDatabaseID );
}
void plugin_onServerGroupPermListEvent(size_t hostPluginID, uint64_t serverConnectionHandlerID, int permissionSkip)
{
	MONOHOST->plugin_onServerGroupPermListEvent( hostPluginID, serverConnectionHandlerID, permissionSkip );
}
void plugin_onServerGroupPermListFinishedEvent(size_t hostPluginID, uint64_t serverConnectionHandlerID, uint64_t serverGroupID)
{
	MONOHOST->plugin_onServerGroupPermListFinishedEvent( hostPluginID, serverConnectionHandlerID, serverGroupID );
}
void plugin_onServerGroupClientListEvent(size_t hostPluginID, uint64_t serverConnectionHandlerID, const char* clientUniqueID)
{
	MONOHOST->plugin_onServerGroupClientListEvent( hostPluginID, serverConnectionHandlerID, clientUniqueID );
}
void plugin_onChannelGroupListEvent(size_t hostPluginID, uint64_t serverConnectionHandlerID, int saveDB)
{
	MONOHOST->plugin_onChannelGroupListEvent( hostPluginID, serverConnectionHandlerID, saveDB );
}
void plugin_onChannelGroupListFinishedEvent(size_t hostPluginID, uint64_t serverConnectionHandlerID)
{
	MONOHOST->plugin_onChannelGroupListFinishedEvent( hostPluginID, serverConnectionHandlerID );
}
void plugin_onChannelGroupPermListEvent(size_t hostPluginID, uint64_t serverConnectionHandlerID, int permissionSkip)
{
	MONOHOST->plugin_onChannelGroupPermListEvent( hostPluginID, serverConnectionHandlerID, permissionSkip );
}
void plugin_onChannelGroupPermListFinishedEvent(size_t hostPluginID, uint64_t serverConnectionHandlerID, uint64_t channelGroupID)
{
	MONOHOST->plugin_onChannelGroupPermListFinishedEvent( hostPluginID, serverConnectionHandlerID, channelGroupID );
}
void plugin_onChannelPermListEvent(size_t hostPluginID, uint64_t serverConnectionHandlerID, int permissionSkip)
{
	MONOHOST->plugin_onChannelPermListEvent( hostPluginID, serverConnectionHandlerID, permissionSkip );
}
void plugin_onChannelPermListFinishedEvent(size_t hostPluginID, uint64_t serverConnectionHandlerID, uint64_t channelID)
{
	MONOHOST->plugin_onChannelPermListFinishedEvent( hostPluginID, serverConnectionHandlerID, channelID );
}
void plugin_onClientPermListEvent(size_t hostPluginID, uint64_t serverConnectionHandlerID, int permissionSkip)
{
	MONOHOST->plugin_onClientPermListEvent( hostPluginID, serverConnectionHandlerID, permissionSkip );
}
void plugin_onClientPermListFinishedEvent(size_t hostPluginID, uint64_t serverConnectionHandlerID, uint64_t clientDatabaseID)
{
	MONOHOST->plugin_onClientPermListFinishedEvent( hostPluginID, serverConnectionHandlerID, clientDatabaseID );
}
void plugin_onChannelClientPermListEvent(size_t hostPluginID, uint64_t serverConnectionHandlerID, int permissionSkip)
{
	MONOHOST->plugin_onChannelClientPermListEvent( hostPluginID, serverConnectionHandlerID, permissionSkip );
}
void plugin_onChannelClientPermListFinishedEvent(size_t hostPluginID, uint64_t serverConnectionHandlerID, uint64_t clientDatabaseID)
{
	MONOHOST->plugin_onChannelClientPermListFinishedEvent( hostPluginID, serverConnectionHandlerID, clientDatabaseID );
}
void plugin_onClientChannelGroupChangedEvent(size_t hostPluginID, uint64_t serverConnectionHandlerID, const char* invokerUniqueIdentity)
{
	MONOHOST->plugin_onClientChannelGroupChangedEvent( hostPluginID, serverConnectionHandlerID, invokerUniqueIdentity );
}
int  plugin_onServerPermissionErrorEvent(size_t hostPluginID, uint64_t serverConnectionHandlerID, unsigned int failedPermissionID)
{
	return MONOHOST->plugin_onServerPermissionErrorEvent( hostPluginID, serverConnectionHandlerID, failedPermissionID );
}
void plugin_onPermissionListGroupEndIDEvent(size_t hostPluginID, uint64_t serverConnectionHandlerID, unsigned int groupEndID)
{
	MONOHOST->plugin_onPermissionListGroupEndIDEvent( hostPluginID, serverConnectionHandlerID, groupEndID );
}
void plugin_onPermissionListEvent(size_t hostPluginID, uint64_t serverConnectionHandlerID, const char* permissionDescription)
{
	MONOHOST->plugin_onPermissionListEvent( hostPluginID, serverConnectionHandlerID, permissionDescription );
}
void plugin_onPermissionListFinishedEvent(size_t hostPluginID, uint64_t serverConnectionHandlerID)
{
	MONOHOST->plugin_onPermissionListFinishedEvent( hostPluginID, serverConnectionHandlerID );
}
void plugin_onPermissionOverviewEvent(size_t hostPluginID, uint64_t serverConnectionHandlerID, int permissionSkip)
{
	MONOHOST->plugin_onPermissionOverviewEvent( hostPluginID, serverConnectionHandlerID, permissionSkip );
}
void plugin_onPermissionOverviewFinishedEvent(size_t hostPluginID, uint64_t serverConnectionHandlerID)
{
	MONOHOST->plugin_onPermissionOverviewFinishedEvent( hostPluginID, serverConnectionHandlerID );
}
void plugin_onServerGroupClientAddedEvent(size_t hostPluginID, uint64_t serverConnectionHandlerID, const char* invokerUniqueIdentity)
{
	MONOHOST->plugin_onServerGroupClientAddedEvent( hostPluginID, serverConnectionHandlerID, invokerUniqueIdentity );
}
void plugin_onServerGroupClientDeletedEvent(size_t hostPluginID, uint64_t serverConnectionHandlerID, const char* invokerUniqueIdentity)
{
	MONOHOST->plugin_onServerGroupClientDeletedEvent( hostPluginID, serverConnectionHandlerID, invokerUniqueIdentity );
}
void plugin_onClientNeededPermissionsEvent(size_t hostPluginID, uint64_t serverConnectionHandlerID, int permissionValue)
{
	MONOHOST->plugin_onClientNeededPermissionsEvent( hostPluginID, serverConnectionHandlerID, permissionValue );
}
void plugin_onClientNeededPermissionsFinishedEvent(size_t hostPluginID, uint64_t serverConnectionHandlerID)
{
	MONOHOST->plugin_onClientNeededPermissionsFinishedEvent( hostPluginID, serverConnectionHandlerID );
}
void plugin_onFileTransferStatusEvent(size_t hostPluginID, uint16_t transferID, uint64_t serverConnectionHandlerID)
{
	MONOHOST->plugin_onFileTransferStatusEvent( hostPluginID, transferID, serverConnectionHandlerID );
}
void plugin_onClientChatClosedEvent(size_t hostPluginID, uint64_t serverConnectionHandlerID, const char* clientUniqueIdentity)
{
	MONOHOST->plugin_onClientChatClosedEvent( hostPluginID, serverConnectionHandlerID, clientUniqueIdentity );
}
void plugin_onClientChatComposingEvent(size_t hostPluginID, uint64_t serverConnectionHandlerID, const char* clientUniqueIdentity)
{
	MONOHOST->plugin_onClientChatComposingEvent( hostPluginID, serverConnectionHandlerID, clientUniqueIdentity );
}
void plugin_onServerLogEvent(size_t hostPluginID, uint64_t serverConnectionHandlerID, const char* logMsg)
{
	MONOHOST->plugin_onServerLogEvent( hostPluginID, serverConnectionHandlerID, logMsg );
}
void plugin_onServerLogFinishedEvent(size_t hostPluginID, uint64_t serverConnectionHandlerID, uint64_t fileSize)
{
	MONOHOST->plugin_onServerLogFinishedEvent( hostPluginID, serverConnectionHandlerID, fileSize );
}
void plugin_onMessageListEvent(size_t hostPluginID, uint64_t serverConnectionHandlerID, int flagRead)
{
	MONOHOST->plugin_onMessageListEvent( hostPluginID, serverConnectionHandlerID, flagRead );
}
void plugin_onMessageGetEvent(size_t hostPluginID, uint64_t serverConnectionHandlerID, uint64_t timestamp)
{
	MONOHOST->plugin_onMessageGetEvent( hostPluginID, serverConnectionHandlerID, timestamp );
}
void plugin_onClientDBIDfromUIDEvent(size_t hostPluginID, uint64_t serverConnectionHandlerID, uint64_t clientDatabaseID)
{
	MONOHOST->plugin_onClientDBIDfromUIDEvent( hostPluginID, serverConnectionHandlerID, clientDatabaseID );
}
void plugin_onClientNamefromUIDEvent(size_t hostPluginID, uint64_t serverConnectionHandlerID, const char* clientNickName)
{
	MONOHOST->plugin_onClientNamefromUIDEvent( hostPluginID, serverConnectionHandlerID, clientNickName );
}
void plugin_onClientNamefromDBIDEvent(size_t hostPluginID, uint64_t serverConnectionHandlerID, const char* clientNickName)
{
	MONOHOST->plugin_onClientNamefromDBIDEvent( hostPluginID, serverConnectionHandlerID, clientNickName );
}
void plugin_onComplainListEvent(size_t hostPluginID, uint64_t serverConnectionHandlerID, uint64_t timestamp)
{
	MONOHOST->plugin_onComplainListEvent( hostPluginID, serverConnectionHandlerID, timestamp );
}
void plugin_onBanListEvent(size_t hostPluginID, uint64_t serverConnectionHandlerID, const char* lastNickName)
{
	MONOHOST->plugin_onBanListEvent( hostPluginID, serverConnectionHandlerID, lastNickName );
}
void plugin_onClientServerQueryLoginPasswordEvent(size_t hostPluginID, uint64_t serverConnectionHandlerID, const char* loginPassword)
{
	MONOHOST->plugin_onClientServerQueryLoginPasswordEvent( hostPluginID, serverConnectionHandlerID, loginPassword );
}
void plugin_onPluginCommandEvent(size_t hostPluginID, uint64_t serverConnectionHandlerID, const char* pluginCommand)
{
	MONOHOST->plugin_onPluginCommandEvent( hostPluginID, serverConnectionHandlerID, pluginCommand );
}
void plugin_onIncomingClientQueryEvent(size_t hostPluginID, uint64_t serverConnectionHandlerID, const char* commandText)
{
	MONOHOST->plugin_onIncomingClientQueryEvent( hostPluginID, serverConnectionHandlerID, commandText );
}
void plugin_onServerTemporaryPasswordListEvent(size_t hostPluginID, uint64_t serverConnectionHandlerID, const char* targetChannelPW)
{
	MONOHOST->plugin_onServerTemporaryPasswordListEvent( hostPluginID, serverConnectionHandlerID, targetChannelPW );
}
void plugin_onAvatarUpdated(size_t hostPluginID, uint64_t serverConnectionHandlerID, const char* avatarPath)
{
	MONOHOST->plugin_onAvatarUpdated( hostPluginID, serverConnectionHandlerID, avatarPath );
}
void plugin_onHotkeyEvent(size_t hostPluginID, const char* keyword)
{
	MONOHOST->plugin_onHotkeyEvent( hostPluginID, keyword );
}
void plugin_onHotkeyRecordedEvent(size_t hostPluginID, const char* keyword, const char* key)
{
	MONOHOST->plugin_onHotkeyRecordedEvent( hostPluginID, keyword, key );
}
void plugin_onClientDisplayNameChanged(size_t hostPluginID, uint64_t serverConnectionHandlerID, const char* uniqueClientIdentifier)
{
	MONOHOST->plugin_onClientDisplayNameChanged( hostPluginID, serverConnectionHandlerID, uniqueClientIdentifier );
}
