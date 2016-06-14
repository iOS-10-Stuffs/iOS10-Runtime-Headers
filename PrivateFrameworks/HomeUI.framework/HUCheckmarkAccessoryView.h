/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUCheckmarkAccessoryView : UIImageView {
    bool  _checked;
    UIColor * _circleBackgroundColor;
}

@property (nonatomic) bool checked;
@property (nonatomic, retain) UIColor *circleBackgroundColor;

+ (double)borderWidth;
+ (id)checkmarkImage;
+ (id)grayBorderColor;

- (void).cxx_destruct;
- (bool)checked;
- (id)circleBackgroundColor;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 backgroundColor:(id)arg2;
- (void)layoutSubviews;
- (void)setChecked:(bool)arg1;
- (void)setCircleBackgroundColor:(id)arg1;

@end