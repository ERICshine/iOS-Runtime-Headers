/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface _MPRadioStaticProfileConnectionObserver : NSObject <MCProfileConnectionObserver> {
    BOOL _isProfileExplicitContentRestricted;
}

@property(readonly) BOOL isProfileExplicitContentRestricted;

- (void)dealloc;
- (id)init;
- (BOOL)isProfileExplicitContentRestricted;
- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2;
- (void)profileConnectionDidReceiveRestrictionChangedNotification:(id)arg1 userInfo:(id)arg2;

@end
