//
//  ActivityIndicator.h
//  ActivityIndicator
//
//  Created by pronebird on 27/11/14.
//  Copyright (c) 2014 codeispoetry.ru. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

IB_DESIGNABLE
@interface ActivityIndicator : UIView

/**
 *  Ring thickness (default: 2)
 */
@property (nonatomic) IBInspectable CGFloat thickness;

/**
 *  Outer ring color (20% transparent gray)
 */
@property (nonatomic) IBInspectable UIColor *outerColor;

/**
 *  Inner ring color (Default: nil, uses current tint color)
 */
@property (nonatomic, null_resettable) IBInspectable UIColor *innerColor;

/**
 *  Whether is currently animating
 */
@property (nonatomic, readonly) BOOL animating;

- (void)startAnimating;
- (void)stopAnimating;

@end

NS_ASSUME_NONNULL_END
