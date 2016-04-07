// Do not edit this directly; if there are changes needed, edit the codegen and regenerate
// Do not compile this directly, it's only meant to be included in ts3plugin.c
int ts3plugin_offersConfigure()
{
	return pluginHost->offersConfigure( hostPluginID );
}
void ts3plugin_configure(void* handle, void* qParentWidget)
{
	pluginHost->configure( hostPluginID, handle, qParentWidget );
}
void ts3plugin_registerPluginID(const char* id)
{
	pluginHost->registerPluginID( hostPluginID, id );
}
int ts3plugin_processCommand(uint64_t serverConnectionHandlerID, const char* command)
{
	return pluginHost->processCommand( hostPluginID, serverConnectionHandlerID, command );
}
void ts3plugin_currentServerConnectionChanged(uint64_t serverConnectionHandlerID)
{
	pluginHost->currentServerConnectionChanged( hostPluginID, serverConnectionHandlerID );
}
int ts3plugin_requestAutoload()
{
	return pluginHost->requestAutoload( hostPluginID );
}
void ts3plugin_onConnectStatusChangeEvent(uint64_t serverConnectionHandlerID, unsigned int errorNumber)
{
	pluginHost->onConnectStatusChangeEvent( hostPluginID, serverConnectionHandlerID, errorNumber );
}
void ts3plugin_onNewChannelEvent(uint64_t serverConnectionHandlerID, uint64_t channelParentID)
{
	pluginHost->onNewChannelEvent( hostPluginID, serverConnectionHandlerID, channelParentID );
}
void ts3plugin_onNewChannelCreatedEvent(uint64_t serverConnectionHandlerID, const char* invokerUniqueIdentifier)
{
	pluginHost->onNewChannelCreatedEvent( hostPluginID, serverConnectionHandlerID, invokerUniqueIdentifier );
}
void ts3plugin_onDelChannelEvent(uint64_t serverConnectionHandlerID, const char* invokerUniqueIdentifier)
{
	pluginHost->onDelChannelEvent( hostPluginID, serverConnectionHandlerID, invokerUniqueIdentifier );
}
void ts3plugin_onChannelMoveEvent(uint64_t serverConnectionHandlerID, const char* invokerUniqueIdentifier)
{
	pluginHost->onChannelMoveEvent( hostPluginID, serverConnectionHandlerID, invokerUniqueIdentifier );
}
void ts3plugin_onUpdateChannelEvent(uint64_t serverConnectionHandlerID, uint64_t channelID)
{
	pluginHost->onUpdateChannelEvent( hostPluginID, serverConnectionHandlerID, channelID );
}
void ts3plugin_onUpdateChannelEditedEvent(uint64_t serverConnectionHandlerID, const char* invokerUniqueIdentifier)
{
	pluginHost->onUpdateChannelEditedEvent( hostPluginID, serverConnectionHandlerID, invokerUniqueIdentifier );
}
void ts3plugin_onUpdateClientEvent(uint64_t serverConnectionHandlerID, const char* invokerUniqueIdentifier)
{
	pluginHost->onUpdateClientEvent( hostPluginID, serverConnectionHandlerID, invokerUniqueIdentifier );
}
void ts3plugin_onClientMoveEvent(uint64_t serverConnectionHandlerID, const char* moveMessage)
{
	pluginHost->onClientMoveEvent( hostPluginID, serverConnectionHandlerID, moveMessage );
}
void ts3plugin_onClientMoveSubscriptionEvent(uint64_t serverConnectionHandlerID, int visibility)
{
	pluginHost->onClientMoveSubscriptionEvent( hostPluginID, serverConnectionHandlerID, visibility );
}
void ts3plugin_onClientMoveTimeoutEvent(uint64_t serverConnectionHandlerID, const char* timeoutMessage)
{
	pluginHost->onClientMoveTimeoutEvent( hostPluginID, serverConnectionHandlerID, timeoutMessage );
}
void ts3plugin_onClientMoveMovedEvent(uint64_t serverConnectionHandlerID, const char* moveMessage)
{
	pluginHost->onClientMoveMovedEvent( hostPluginID, serverConnectionHandlerID, moveMessage );
}
void ts3plugin_onClientKickFromChannelEvent(uint64_t serverConnectionHandlerID, const char* kickMessage)
{
	pluginHost->onClientKickFromChannelEvent( hostPluginID, serverConnectionHandlerID, kickMessage );
}
void ts3plugin_onClientKickFromServerEvent(uint64_t serverConnectionHandlerID, const char* kickMessage)
{
	pluginHost->onClientKickFromServerEvent( hostPluginID, serverConnectionHandlerID, kickMessage );
}
void ts3plugin_onClientIDsEvent(uint64_t serverConnectionHandlerID, const char* clientName)
{
	pluginHost->onClientIDsEvent( hostPluginID, serverConnectionHandlerID, clientName );
}
void ts3plugin_onClientIDsFinishedEvent(uint64_t serverConnectionHandlerID)
{
	pluginHost->onClientIDsFinishedEvent( hostPluginID, serverConnectionHandlerID );
}
void ts3plugin_onServerEditedEvent(uint64_t serverConnectionHandlerID, const char* editerUniqueIdentifier)
{
	pluginHost->onServerEditedEvent( hostPluginID, serverConnectionHandlerID, editerUniqueIdentifier );
}
void ts3plugin_onServerUpdatedEvent(uint64_t serverConnectionHandlerID)
{
	pluginHost->onServerUpdatedEvent( hostPluginID, serverConnectionHandlerID );
}
int  ts3plugin_onServerErrorEvent(uint64_t serverConnectionHandlerID, const char* extraMessage)
{
	return pluginHost->onServerErrorEvent( hostPluginID, serverConnectionHandlerID, extraMessage );
}
void ts3plugin_onServerStopEvent(uint64_t serverConnectionHandlerID, const char* shutdownMessage)
{
	pluginHost->onServerStopEvent( hostPluginID, serverConnectionHandlerID, shutdownMessage );
}
int  ts3plugin_onTextMessageEvent(uint64_t serverConnectionHandlerID, int ffIgnored)
{
	return pluginHost->onTextMessageEvent( hostPluginID, serverConnectionHandlerID, ffIgnored );
}
void ts3plugin_onTalkStatusChangeEvent(uint64_t serverConnectionHandlerID, uint16_t clientID)
{
	pluginHost->onTalkStatusChangeEvent( hostPluginID, serverConnectionHandlerID, clientID );
}
void ts3plugin_onConnectionInfoEvent(uint64_t serverConnectionHandlerID, uint16_t clientID)
{
	pluginHost->onConnectionInfoEvent( hostPluginID, serverConnectionHandlerID, clientID );
}
void ts3plugin_onServerConnectionInfoEvent(uint64_t serverConnectionHandlerID)
{
	pluginHost->onServerConnectionInfoEvent( hostPluginID, serverConnectionHandlerID );
}
void ts3plugin_onChannelSubscribeEvent(uint64_t serverConnectionHandlerID, uint64_t channelID)
{
	pluginHost->onChannelSubscribeEvent( hostPluginID, serverConnectionHandlerID, channelID );
}
void ts3plugin_onChannelSubscribeFinishedEvent(uint64_t serverConnectionHandlerID)
{
	pluginHost->onChannelSubscribeFinishedEvent( hostPluginID, serverConnectionHandlerID );
}
void ts3plugin_onChannelUnsubscribeEvent(uint64_t serverConnectionHandlerID, uint64_t channelID)
{
	pluginHost->onChannelUnsubscribeEvent( hostPluginID, serverConnectionHandlerID, channelID );
}
void ts3plugin_onChannelUnsubscribeFinishedEvent(uint64_t serverConnectionHandlerID)
{
	pluginHost->onChannelUnsubscribeFinishedEvent( hostPluginID, serverConnectionHandlerID );
}
void ts3plugin_onChannelDescriptionUpdateEvent(uint64_t serverConnectionHandlerID, uint64_t channelID)
{
	pluginHost->onChannelDescriptionUpdateEvent( hostPluginID, serverConnectionHandlerID, channelID );
}
void ts3plugin_onChannelPasswordChangedEvent(uint64_t serverConnectionHandlerID, uint64_t channelID)
{
	pluginHost->onChannelPasswordChangedEvent( hostPluginID, serverConnectionHandlerID, channelID );
}
void ts3plugin_onPlaybackShutdownCompleteEvent(uint64_t serverConnectionHandlerID)
{
	pluginHost->onPlaybackShutdownCompleteEvent( hostPluginID, serverConnectionHandlerID );
}
void ts3plugin_onSoundDeviceListChangedEvent(const char* modeID, int playOrCap)
{
	pluginHost->onSoundDeviceListChangedEvent( hostPluginID, modeID, playOrCap );
}
void ts3plugin_onEditPlaybackVoiceDataEvent(uint64_t serverConnectionHandlerID, int channels)
{
	pluginHost->onEditPlaybackVoiceDataEvent( hostPluginID, serverConnectionHandlerID, channels );
}
void ts3plugin_onEditPostProcessVoiceDataEvent(uint64_t serverConnectionHandlerID, unsigned int* channelFillMask)
{
	pluginHost->onEditPostProcessVoiceDataEvent( hostPluginID, serverConnectionHandlerID, channelFillMask );
}
void ts3plugin_onEditMixedPlaybackVoiceDataEvent(uint64_t serverConnectionHandlerID, unsigned int* channelFillMask)
{
	pluginHost->onEditMixedPlaybackVoiceDataEvent( hostPluginID, serverConnectionHandlerID, channelFillMask );
}
void ts3plugin_onEditCapturedVoiceDataEvent(uint64_t serverConnectionHandlerID, int* edited)
{
	pluginHost->onEditCapturedVoiceDataEvent( hostPluginID, serverConnectionHandlerID, edited );
}
void ts3plugin_onCustom3dRolloffCalculationClientEvent(uint64_t serverConnectionHandlerID, float* volume)
{
	pluginHost->onCustom3dRolloffCalculationClientEvent( hostPluginID, serverConnectionHandlerID, volume );
}
void ts3plugin_onCustom3dRolloffCalculationWaveEvent(uint64_t serverConnectionHandlerID, float* volume)
{
	pluginHost->onCustom3dRolloffCalculationWaveEvent( hostPluginID, serverConnectionHandlerID, volume );
}
void ts3plugin_onUserLoggingMessageEvent(const char* logMessage, const char* completeLogString)
{
	pluginHost->onUserLoggingMessageEvent( hostPluginID, logMessage, completeLogString );
}
void ts3plugin_onClientBanFromServerEvent(uint64_t serverConnectionHandlerID, const char* kickMessage)
{
	pluginHost->onClientBanFromServerEvent( hostPluginID, serverConnectionHandlerID, kickMessage );
}
int  ts3plugin_onClientPokeEvent(uint64_t serverConnectionHandlerID, int ffIgnored)
{
	return pluginHost->onClientPokeEvent( hostPluginID, serverConnectionHandlerID, ffIgnored );
}
void ts3plugin_onClientSelfVariableUpdateEvent(uint64_t serverConnectionHandlerID, const char* newValue)
{
	pluginHost->onClientSelfVariableUpdateEvent( hostPluginID, serverConnectionHandlerID, newValue );
}
void ts3plugin_onFileListEvent(uint64_t serverConnectionHandlerID, const char* returnCode)
{
	pluginHost->onFileListEvent( hostPluginID, serverConnectionHandlerID, returnCode );
}
void ts3plugin_onFileListFinishedEvent(uint64_t serverConnectionHandlerID, const char* path)
{
	pluginHost->onFileListFinishedEvent( hostPluginID, serverConnectionHandlerID, path );
}
void ts3plugin_onFileInfoEvent(uint64_t serverConnectionHandlerID, uint64_t datetime)
{
	pluginHost->onFileInfoEvent( hostPluginID, serverConnectionHandlerID, datetime );
}
void ts3plugin_onServerGroupListEvent(uint64_t serverConnectionHandlerID, int saveDB)
{
	pluginHost->onServerGroupListEvent( hostPluginID, serverConnectionHandlerID, saveDB );
}
void ts3plugin_onServerGroupListFinishedEvent(uint64_t serverConnectionHandlerID)
{
	pluginHost->onServerGroupListFinishedEvent( hostPluginID, serverConnectionHandlerID );
}
void ts3plugin_onServerGroupByClientIDEvent(uint64_t serverConnectionHandlerID, uint64_t clientDatabaseID)
{
	pluginHost->onServerGroupByClientIDEvent( hostPluginID, serverConnectionHandlerID, clientDatabaseID );
}
void ts3plugin_onServerGroupPermListEvent(uint64_t serverConnectionHandlerID, int permissionSkip)
{
	pluginHost->onServerGroupPermListEvent( hostPluginID, serverConnectionHandlerID, permissionSkip );
}
void ts3plugin_onServerGroupPermListFinishedEvent(uint64_t serverConnectionHandlerID, uint64_t serverGroupID)
{
	pluginHost->onServerGroupPermListFinishedEvent( hostPluginID, serverConnectionHandlerID, serverGroupID );
}
void ts3plugin_onServerGroupClientListEvent(uint64_t serverConnectionHandlerID, const char* clientUniqueID)
{
	pluginHost->onServerGroupClientListEvent( hostPluginID, serverConnectionHandlerID, clientUniqueID );
}
void ts3plugin_onChannelGroupListEvent(uint64_t serverConnectionHandlerID, int saveDB)
{
	pluginHost->onChannelGroupListEvent( hostPluginID, serverConnectionHandlerID, saveDB );
}
void ts3plugin_onChannelGroupListFinishedEvent(uint64_t serverConnectionHandlerID)
{
	pluginHost->onChannelGroupListFinishedEvent( hostPluginID, serverConnectionHandlerID );
}
void ts3plugin_onChannelGroupPermListEvent(uint64_t serverConnectionHandlerID, int permissionSkip)
{
	pluginHost->onChannelGroupPermListEvent( hostPluginID, serverConnectionHandlerID, permissionSkip );
}
void ts3plugin_onChannelGroupPermListFinishedEvent(uint64_t serverConnectionHandlerID, uint64_t channelGroupID)
{
	pluginHost->onChannelGroupPermListFinishedEvent( hostPluginID, serverConnectionHandlerID, channelGroupID );
}
void ts3plugin_onChannelPermListEvent(uint64_t serverConnectionHandlerID, int permissionSkip)
{
	pluginHost->onChannelPermListEvent( hostPluginID, serverConnectionHandlerID, permissionSkip );
}
void ts3plugin_onChannelPermListFinishedEvent(uint64_t serverConnectionHandlerID, uint64_t channelID)
{
	pluginHost->onChannelPermListFinishedEvent( hostPluginID, serverConnectionHandlerID, channelID );
}
void ts3plugin_onClientPermListEvent(uint64_t serverConnectionHandlerID, int permissionSkip)
{
	pluginHost->onClientPermListEvent( hostPluginID, serverConnectionHandlerID, permissionSkip );
}
void ts3plugin_onClientPermListFinishedEvent(uint64_t serverConnectionHandlerID, uint64_t clientDatabaseID)
{
	pluginHost->onClientPermListFinishedEvent( hostPluginID, serverConnectionHandlerID, clientDatabaseID );
}
void ts3plugin_onChannelClientPermListEvent(uint64_t serverConnectionHandlerID, int permissionSkip)
{
	pluginHost->onChannelClientPermListEvent( hostPluginID, serverConnectionHandlerID, permissionSkip );
}
void ts3plugin_onChannelClientPermListFinishedEvent(uint64_t serverConnectionHandlerID, uint64_t clientDatabaseID)
{
	pluginHost->onChannelClientPermListFinishedEvent( hostPluginID, serverConnectionHandlerID, clientDatabaseID );
}
void ts3plugin_onClientChannelGroupChangedEvent(uint64_t serverConnectionHandlerID, const char* invokerUniqueIdentity)
{
	pluginHost->onClientChannelGroupChangedEvent( hostPluginID, serverConnectionHandlerID, invokerUniqueIdentity );
}
int  ts3plugin_onServerPermissionErrorEvent(uint64_t serverConnectionHandlerID, unsigned int failedPermissionID)
{
	return pluginHost->onServerPermissionErrorEvent( hostPluginID, serverConnectionHandlerID, failedPermissionID );
}
void ts3plugin_onPermissionListGroupEndIDEvent(uint64_t serverConnectionHandlerID, unsigned int groupEndID)
{
	pluginHost->onPermissionListGroupEndIDEvent( hostPluginID, serverConnectionHandlerID, groupEndID );
}
void ts3plugin_onPermissionListEvent(uint64_t serverConnectionHandlerID, const char* permissionDescription)
{
	pluginHost->onPermissionListEvent( hostPluginID, serverConnectionHandlerID, permissionDescription );
}
void ts3plugin_onPermissionListFinishedEvent(uint64_t serverConnectionHandlerID)
{
	pluginHost->onPermissionListFinishedEvent( hostPluginID, serverConnectionHandlerID );
}
void ts3plugin_onPermissionOverviewEvent(uint64_t serverConnectionHandlerID, int permissionSkip)
{
	pluginHost->onPermissionOverviewEvent( hostPluginID, serverConnectionHandlerID, permissionSkip );
}
void ts3plugin_onPermissionOverviewFinishedEvent(uint64_t serverConnectionHandlerID)
{
	pluginHost->onPermissionOverviewFinishedEvent( hostPluginID, serverConnectionHandlerID );
}
void ts3plugin_onServerGroupClientAddedEvent(uint64_t serverConnectionHandlerID, const char* invokerUniqueIdentity)
{
	pluginHost->onServerGroupClientAddedEvent( hostPluginID, serverConnectionHandlerID, invokerUniqueIdentity );
}
void ts3plugin_onServerGroupClientDeletedEvent(uint64_t serverConnectionHandlerID, const char* invokerUniqueIdentity)
{
	pluginHost->onServerGroupClientDeletedEvent( hostPluginID, serverConnectionHandlerID, invokerUniqueIdentity );
}
void ts3plugin_onClientNeededPermissionsEvent(uint64_t serverConnectionHandlerID, int permissionValue)
{
	pluginHost->onClientNeededPermissionsEvent( hostPluginID, serverConnectionHandlerID, permissionValue );
}
void ts3plugin_onClientNeededPermissionsFinishedEvent(uint64_t serverConnectionHandlerID)
{
	pluginHost->onClientNeededPermissionsFinishedEvent( hostPluginID, serverConnectionHandlerID );
}
void ts3plugin_onFileTransferStatusEvent(uint16_t transferID, uint64_t serverConnectionHandlerID)
{
	pluginHost->onFileTransferStatusEvent( hostPluginID, transferID, serverConnectionHandlerID );
}
void ts3plugin_onClientChatClosedEvent(uint64_t serverConnectionHandlerID, const char* clientUniqueIdentity)
{
	pluginHost->onClientChatClosedEvent( hostPluginID, serverConnectionHandlerID, clientUniqueIdentity );
}
void ts3plugin_onClientChatComposingEvent(uint64_t serverConnectionHandlerID, const char* clientUniqueIdentity)
{
	pluginHost->onClientChatComposingEvent( hostPluginID, serverConnectionHandlerID, clientUniqueIdentity );
}
void ts3plugin_onServerLogEvent(uint64_t serverConnectionHandlerID, const char* logMsg)
{
	pluginHost->onServerLogEvent( hostPluginID, serverConnectionHandlerID, logMsg );
}
void ts3plugin_onServerLogFinishedEvent(uint64_t serverConnectionHandlerID, uint64_t fileSize)
{
	pluginHost->onServerLogFinishedEvent( hostPluginID, serverConnectionHandlerID, fileSize );
}
void ts3plugin_onMessageListEvent(uint64_t serverConnectionHandlerID, int flagRead)
{
	pluginHost->onMessageListEvent( hostPluginID, serverConnectionHandlerID, flagRead );
}
void ts3plugin_onMessageGetEvent(uint64_t serverConnectionHandlerID, uint64_t timestamp)
{
	pluginHost->onMessageGetEvent( hostPluginID, serverConnectionHandlerID, timestamp );
}
void ts3plugin_onClientDBIDfromUIDEvent(uint64_t serverConnectionHandlerID, uint64_t clientDatabaseID)
{
	pluginHost->onClientDBIDfromUIDEvent( hostPluginID, serverConnectionHandlerID, clientDatabaseID );
}
void ts3plugin_onClientNamefromUIDEvent(uint64_t serverConnectionHandlerID, const char* clientNickName)
{
	pluginHost->onClientNamefromUIDEvent( hostPluginID, serverConnectionHandlerID, clientNickName );
}
void ts3plugin_onClientNamefromDBIDEvent(uint64_t serverConnectionHandlerID, const char* clientNickName)
{
	pluginHost->onClientNamefromDBIDEvent( hostPluginID, serverConnectionHandlerID, clientNickName );
}
void ts3plugin_onComplainListEvent(uint64_t serverConnectionHandlerID, uint64_t timestamp)
{
	pluginHost->onComplainListEvent( hostPluginID, serverConnectionHandlerID, timestamp );
}
void ts3plugin_onBanListEvent(uint64_t serverConnectionHandlerID, const char* lastNickName)
{
	pluginHost->onBanListEvent( hostPluginID, serverConnectionHandlerID, lastNickName );
}
void ts3plugin_onClientServerQueryLoginPasswordEvent(uint64_t serverConnectionHandlerID, const char* loginPassword)
{
	pluginHost->onClientServerQueryLoginPasswordEvent( hostPluginID, serverConnectionHandlerID, loginPassword );
}
void ts3plugin_onPluginCommandEvent(uint64_t serverConnectionHandlerID, const char* pluginCommand)
{
	pluginHost->onPluginCommandEvent( hostPluginID, serverConnectionHandlerID, pluginCommand );
}
void ts3plugin_onIncomingClientQueryEvent(uint64_t serverConnectionHandlerID, const char* commandText)
{
	pluginHost->onIncomingClientQueryEvent( hostPluginID, serverConnectionHandlerID, commandText );
}
void ts3plugin_onServerTemporaryPasswordListEvent(uint64_t serverConnectionHandlerID, const char* targetChannelPW)
{
	pluginHost->onServerTemporaryPasswordListEvent( hostPluginID, serverConnectionHandlerID, targetChannelPW );
}
void ts3plugin_onAvatarUpdated(uint64_t serverConnectionHandlerID, const char* avatarPath)
{
	pluginHost->onAvatarUpdated( hostPluginID, serverConnectionHandlerID, avatarPath );
}
void ts3plugin_onHotkeyEvent(const char* keyword)
{
	pluginHost->onHotkeyEvent( hostPluginID, keyword );
}
void ts3plugin_onHotkeyRecordedEvent(const char* keyword, const char* key)
{
	pluginHost->onHotkeyRecordedEvent( hostPluginID, keyword, key );
}
void ts3plugin_onClientDisplayNameChanged(uint64_t serverConnectionHandlerID, const char* uniqueClientIdentifier)
{
	pluginHost->onClientDisplayNameChanged( hostPluginID, serverConnectionHandlerID, uniqueClientIdentifier );
}
