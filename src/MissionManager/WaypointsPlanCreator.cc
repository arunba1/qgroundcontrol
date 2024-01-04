/****************************************************************************
 *
 * (c) 2009-2020 QGROUNDCONTROL PROJECT <http://www.qgroundcontrol.org>
 *
 * QGroundControl is licensed according to the terms in the file
 * COPYING.md in the root of the source code directory.
 *
 ****************************************************************************/

#include "WaypointsPlanCreator.h"
#include "PlanMasterController.h"
#include "MissionSettingsItem.h"
#include "FixedWingLandingComplexItem.h"

WaypointsPlanCreator::WaypointsPlanCreator(PlanMasterController* planMasterController, QObject* parent)
    : PlanCreator(planMasterController, tr("Waypoints"), QStringLiteral("/qmlimages/PlanCreator/WaypointsPlanCreator.png"), parent)
{

}

void WaypointsPlanCreator::createPlan(const QGeoCoordinate& mapCenterCoord)
{
    PlanCreator::createPlan(mapCenterCoord);
}
