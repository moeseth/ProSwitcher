#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

UIImage *PSWGetCachedImageResource(NSString *name, NSBundle *bundle);
UIImage *PSWGetCachedCornerMaskOfSize(CGSize size, CGFloat cornerRadius);
void PSWClearResourceCache();
UIImage *PSWImage(NSString *name);

#define PSWGetCachedSpringBoardResource(name) PSWGetCachedImageResource(name, [NSBundle mainBundle])
