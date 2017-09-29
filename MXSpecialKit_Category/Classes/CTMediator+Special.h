//
//  CTMediator+Special.h
//  MXSpecialKit_Category
//
//  Created by Micheal Xiao on 2017/9/28.
//



#import <UIKit/UIKit.h>

#import <CTMediator/CTMediator.h>

#import <MXAPIsKit/APIRequest.h>

//#import <MXAPIsKit/FFReformProtocol.h>

@interface CTMediator (Special)
    
- (UIViewController*)specialDetailController;
    
- (NSDictionary*)specialReformerWithOriginData:(NSDictionary*)data;
    
- (NSDictionary *)specialReformer;
    
- (APIRequest*)specialAPIRequest;
    
@end

