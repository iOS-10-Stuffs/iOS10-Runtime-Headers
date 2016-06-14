/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPStoreAVItem : MPAVItem {
    unsigned long long  _assetQuality;
    bool  _didDeferLeaseStart;
    bool  _hasEverPrioritizedPlayerItem;
    bool  _hasPrioritizedPlayWhileDownloadSession;
    bool  _hasPrioritizedStreamingDownloadSession;
    bool  _hasValidAssetQuality;
    bool  _isActivePlayerItem;
    unsigned long long  _options;
    MPStorePlayWhileDownloadSession * _playWhileDownloadSession;
    MPMediaPlaybackItemMetadata * _playbackItemMetadata;
    unsigned long long  _preferredAssetQuality;
    unsigned long long  _streamType;
    MPStreamingDownloadSession * _streamingDownloadSession;
}

@property (nonatomic, readonly) unsigned long long options;
@property (nonatomic, readonly) MPMediaPlaybackItemMetadata *playbackItemMetadata;
@property (nonatomic, readonly) unsigned long long streamType;

// Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer

+ (id)_assetURLForCachedLocalPlaybackAssetFilePathForPlaybackItemMetadata:(id)arg1 withMinimumAssetQuality:(unsigned long long)arg2 assetOptions:(id)arg3 returningProtectionType:(unsigned long long*)arg4 assetQuality:(unsigned long long*)arg5 usesPurchaseBundle:(bool*)arg6;
+ (unsigned long long)_currentPreferredAssetQualityForPlaybackItemMetadata:(id)arg1;
+ (void)applyVolumeNormalizationForQueuedItems:(id)arg1;
+ (bool)isPlaybackItemMetadataStreamingForAssetCreation:(id)arg1 returningProtectionType:(unsigned long long*)arg2;
+ (bool)isPlaybackItemMetadataValidForAssetCreation:(id)arg1;

- (void).cxx_destruct;
- (void)_applyLoudnessInfo;
- (id)_chapterTitleForTime:(double)arg1;
- (void)_currentPlaybackRateDidChange:(float)arg1;
- (bool)_getAssetURL:(id*)arg1 playWhileDownloadSession:(id*)arg2 assetQuality:(unsigned long long*)arg3 error:(id*)arg4 usingStoreDownload:(id)arg5 assetOptions:(id)arg6 shouldStartDownload:(bool)arg7;
- (void)_handlePlaybackFinishedTime:(double)arg1 finishedByHittingEnd:(bool)arg2;
- (void)_handleUpdatedLikedState:(long long)arg1 completion:(id /* block */)arg2;
- (void)_loadMediaItemWithCompletionHandler:(id /* block */)arg1;
- (void)_mediaPlaybackItemMetadataDidChangeNotification:(id)arg1;
- (void)_mediaPlaybackItemMetadataLikedStateDidChangeNotification:(id)arg1;
- (id)_newTimeMarkersForChapterType:(long long)arg1;
- (long long)_persistedLikedState;
- (void)_prioritizeDownloadSessionsIfNeeded;
- (void)_updateBookmarkTimeIfNecessary:(double)arg1 isCheckpoint:(bool)arg2;
- (void)_willBecomeActivePlayerItem;
- (void)_willResignActivePlayerItem;
- (id)album;
- (id)albumArtist;
- (long long)albumStoreID;
- (unsigned long long)albumTrackCount;
- (unsigned long long)albumTrackNumber;
- (bool)allowsAirPlayFromCloud;
- (bool)allowsEQ;
- (bool)allowsExternalPlayback;
- (void)applyVolumeNormalizationWithSoundCheckEnabled:(bool)arg1;
- (id)artist;
- (long long)artistStoreID;
- (id)artworkCatalogForPlaybackTime:(double)arg1;
- (id)artworkTimeMarkers;
- (bool)canSeedGenius;
- (id)chapterTimeMarkers;
- (id)composer;
- (id)copyrightText;
- (long long)customAVEQPreset;
- (void)dealloc;
- (id)description;
- (bool)didDeferLeaseStart;
- (unsigned long long)discCount;
- (unsigned long long)discNumber;
- (id)displayableText;
- (double)durationFromExternalMetadata;
- (id)genre;
- (void)handlePlaybackFinishedTime:(double)arg1 finishedByHittingEnd:(bool)arg2;
- (bool)hasAlternatesForTypes:(unsigned long long)arg1;
- (id)initWithPlaybackItemMetadata:(id)arg1 options:(unsigned long long)arg2;
- (bool)isAssetURLValid;
- (bool)isCloudItem;
- (bool)isExplicitTrack;
- (bool)isLikedStateEnabled;
- (bool)isStreamable;
- (bool)isStreamingLowQualityAsset;
- (bool)isSupportedDefaultPlaybackSpeed:(long long)arg1;
- (bool)isValidPlayerSubstituteForItem:(id)arg1;
- (void)loadAssetAndPlayerItem;
- (id)mainTitle;
- (id)mediaItem;
- (id)modelObject;
- (id)modelSong;
- (void)notePlaybackFinishedByHittingEnd;
- (unsigned long long)options;
- (unsigned long long)persistentID;
- (double)playbackCheckpointCurrentTime;
- (id)playbackItemMetadata;
- (void)prepareForRate:(float)arg1 completionHandler:(id /* block */)arg2;
- (void)reevaluateType;
- (void)setAlternateAudioTrackID:(int)arg1;
- (void)setLoudnessInfoVolumeNormalization:(float)arg1;
- (void)setPlaybackCheckpointCurrentTime:(double)arg1;
- (void)setPlaybackFinishedTime:(double)arg1;
- (void)setPlaybackStoppedTime:(double)arg1;
- (void)setRating:(float)arg1;
- (id)storeDownload;
- (long long)storeItemInt64ID;
- (long long)storePlaybackEndpointType;
- (long long)storeSubscriptionAdamID;
- (unsigned long long)streamType;
- (bool)supportsLikedState;
- (bool)supportsRewindAndFastForward15Seconds;
- (id)titlesForTime:(double)arg1;
- (long long)type;
- (id)urlTimeMarkers;
- (bool)useEmbeddedChapterData;
- (float)userRating;
- (bool)usesSubscriptionLease;

// Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI

+ (void)_registerCustomEntityValueHandlers;

// Image: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation

- (id)MPU_contentItemIdentifierCollection;

// Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore

- (bool)mpcReporting_isValidReportingItem;
- (bool)mpcReporting_shouldReportPlayEventsToStore;

@end