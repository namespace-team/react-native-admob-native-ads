#import <React/RCTView.h>
#import <React/RCTBridge.h>
#import <React/RCTComponent.h>

@import GoogleMobileAds;

@interface RNGADMediaView: GADMediaView <GADVideoControllerDelegate>


@property(nonatomic, strong) GADVideoController *videoController;
@property(nonatomic, strong) GADUnifiedNativeAd *nativeAd;

@property (nonatomic) BOOL *pause;
@property (nonatomic) BOOL *muted;

@property (nonatomic, copy) RCTBubblingEventBlock onVideoPlay;
@property (nonatomic, copy) RCTBubblingEventBlock onVideoPause;
@property (nonatomic, copy) RCTBubblingEventBlock onVideoMute;
@property (nonatomic, copy) RCTBubblingEventBlock onVideoStart;
@property (nonatomic, copy) RCTBubblingEventBlock onVideoEnd;
@property (nonatomic, copy) RCTBubblingEventBlock onVideoProgress;

- (void)getCurrentProgress;

@end
