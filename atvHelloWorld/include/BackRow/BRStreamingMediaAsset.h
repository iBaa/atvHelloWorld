/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BRATVMediaItem.h"
#import "BackRow-Structs.h"
#import "BRBaseMediaAsset.h"


@interface BRStreamingMediaAsset : BRBaseMediaAsset <BRATVMediaItem> {
@private
	ATVMediaItemRef _mediaItem;	// 8 = 0x8
}
@property(assign) unsigned bookmarkTimeInMS;	// G=0x3167ab65; S=0x3167b005; converted property
+ (void)setImplementationClass:(Class)aClass;	// 0x315932d1
+ (id)streamingMediaAssetWithMediaItem:(ATVMediaItemRef)mediaItem;	// 0x3167a7d9
- (id)initWithMediaItem:(ATVMediaItemRef)mediaItem;	// 0x3167b1c5
- (id)artist;	// 0x3167aca1
- (id)assetID;	// 0x3167a789
// converted property getter: - (unsigned)bookmarkTimeInMS;	// 0x3167ab65
- (void)dealloc;	// 0x3167a71d
- (long)duration;	// 0x3167abb5
- (BOOL)hasVideoContent;	// 0x3167ad09
- (id)imageProxy;	// 0x3167aa89
- (id)mediaDescription;	// 0x3167ac05
- (ATVMediaItemRef)mediaItemRef;	// 0x3167a70d
- (id)mediaSummary;	// 0x3167ac39
- (id)mediaType;	// 0x3167a75d
- (id)mediaURL;	// 0x3167ae19
- (id)playbackMetadata;	// 0x3167a819
- (id)primaryCollectionTitle;	// 0x3167ac6d
// converted property setter: - (void)setBookmarkTimeInMS:(unsigned)ms;	// 0x3167b005
- (void)setWatched:(BOOL)watched;	// 0x3167ae61
- (id)title;	// 0x3167acd5
@end

