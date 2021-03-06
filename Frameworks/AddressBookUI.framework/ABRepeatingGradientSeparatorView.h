/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class NSArray, UIColor;

@interface ABRepeatingGradientSeparatorView : UIView {
    UIColor *_endColor;
    NSArray *_gradientColors;
    UIColor *_startColor;
    float _step;
}

@property(retain) UIColor * endColor;
@property(readonly) NSArray * gradientColors;
@property(retain) UIColor * startColor;
@property float step;

- (void)dealloc;
- (id)endColor;
- (id)gradientColors;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setEndColor:(id)arg1;
- (void)setStartColor:(id)arg1;
- (void)setStep:(float)arg1;
- (id)startColor;
- (float)step;

@end
