/*
 * EMS-ESP - https://github.com/emsesp/EMS-ESP
 * Copyright 2020  Paul Derbyshire
 * 
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

// common words
MAKE_PSTR_WORD(debug)
MAKE_PSTR_WORD(exit)
MAKE_PSTR_WORD(help)
MAKE_PSTR_WORD(log)
MAKE_PSTR_WORD(logout)
MAKE_PSTR_WORD(enabled)
MAKE_PSTR_WORD(disabled)
MAKE_PSTR_WORD(set)
MAKE_PSTR_WORD(show)
MAKE_PSTR_WORD(on)
MAKE_PSTR_WORD(off)
MAKE_PSTR_WORD(ON)
MAKE_PSTR_WORD(OFF)
MAKE_PSTR_WORD(su)
MAKE_PSTR_WORD(name)
MAKE_PSTR_WORD(auto)
MAKE_PSTR_WORD(scan)
MAKE_PSTR_WORD(password)
MAKE_PSTR_WORD(read)
MAKE_PSTR_WORD(version)
MAKE_PSTR_WORD(values)
MAKE_PSTR_WORD(system)
MAKE_PSTR_WORD(fetch)
MAKE_PSTR_WORD(restart)
MAKE_PSTR_WORD(format)
MAKE_PSTR_WORD(raw)
MAKE_PSTR_WORD(watch)
MAKE_PSTR_WORD(syslog)
MAKE_PSTR_WORD(send)
MAKE_PSTR_WORD(telegram)
MAKE_PSTR_WORD(bus_id)
MAKE_PSTR_WORD(tx_mode)
MAKE_PSTR_WORD(ems)
MAKE_PSTR_WORD(devices)
MAKE_PSTR_WORD(shower)
MAKE_PSTR_WORD(mqtt)
MAKE_PSTR_WORD(emsesp)
MAKE_PSTR_WORD(connected)
MAKE_PSTR_WORD(disconnected)
MAKE_PSTR_WORD(passwd)
MAKE_PSTR_WORD(hostname)
MAKE_PSTR_WORD(wifi)
MAKE_PSTR_WORD(reconnect)
MAKE_PSTR_WORD(ssid)
MAKE_PSTR_WORD(heartbeat)
MAKE_PSTR_WORD(users)
MAKE_PSTR_WORD(master)
MAKE_PSTR_WORD(pin)
MAKE_PSTR_WORD(publish)
MAKE_PSTR_WORD(timeout)
MAKE_PSTR_WORD(board_profile)
MAKE_PSTR_WORD(setvalue)

// for commands
MAKE_PSTR_WORD(call)
MAKE_PSTR_WORD(cmd)
MAKE_PSTR_WORD(id)
MAKE_PSTR_WORD(hc)
MAKE_PSTR_WORD(wwc)
MAKE_PSTR_WORD(device)
MAKE_PSTR_WORD(data)
MAKE_PSTR_WORD(command)
MAKE_PSTR_WORD(commands)
MAKE_PSTR_WORD(info)
MAKE_PSTR_WORD(settings)
MAKE_PSTR_WORD(customizations)
MAKE_PSTR_WORD(value)
MAKE_PSTR_WORD(error)
MAKE_PSTR_WORD(entities)

// devices
MAKE_PSTR_WORD(boiler)
MAKE_PSTR_WORD(thermostat)
MAKE_PSTR_WORD(switch)
MAKE_PSTR_WORD(solar)
MAKE_PSTR_WORD(mixer)
MAKE_PSTR_WORD(gateway)
MAKE_PSTR_WORD(controller)
MAKE_PSTR_WORD(connect)
MAKE_PSTR_WORD(heatpump)
MAKE_PSTR_WORD(generic)
MAKE_PSTR_WORD(analogsensor)
MAKE_PSTR_WORD(unknown)
MAKE_PSTR_WORD(dallassensor)

// format strings
MAKE_PSTR(master_thermostat_fmt, "Master Thermostat Device ID: %s")
MAKE_PSTR(host_fmt, "Host: %s")
MAKE_PSTR(port_fmt, "Port: %d")
MAKE_PSTR(hostname_fmt, "Hostname: %s")
MAKE_PSTR(board_profile_fmt, "Board Profile: %s")
MAKE_PSTR(mark_interval_fmt, "Mark interval: %lus")
MAKE_PSTR(wifi_ssid_fmt, "WiFi SSID: %s")
MAKE_PSTR(wifi_password_fmt, "WiFi Password: %S")
MAKE_PSTR(tx_mode_fmt, "Tx mode: %d")
MAKE_PSTR(bus_id_fmt, "Bus ID: %02X")
MAKE_PSTR(log_level_fmt, "Log level: %s")

MAKE_STR(productid_fmt, "%s EMS ProductID")

MAKE_PSTR_LIST(enum_syslog_level, F_(off), F("emerg"), F("alert"), F("crit"), F_(error), F("warn"), F("notice"), F_(info), F_(debug), F("trace"), F("all"))
MAKE_PSTR_LIST(enum_watch, F_(off), F_(on), F_(raw), F_(unknown))
MAKE_PSTR_LIST(enum_sensortype, F("none"), F("digital in"), F("counter"), F("adc"), F("timer"), F("rate"), F("digital out"), F("pwm 0"), F("pwm 1"), F("pwm 2"))

// strings
MAKE_PSTR(EMSESP, "EMS-ESP")
MAKE_PSTR(cmd_optional, "[cmd]")
MAKE_PSTR(ha_optional, "[ha]")
MAKE_PSTR(deep_optional, "[deep]")
MAKE_PSTR(watchid_optional, "[ID]")
MAKE_PSTR(watch_format_optional, "[off | on | raw | unknown]")
MAKE_PSTR(invalid_watch, "Invalid watch type")
MAKE_PSTR(data_mandatory, "\"XX XX ...\"")
MAKE_PSTR(asterisks, "********")
MAKE_PSTR(n_mandatory, "<n>")
MAKE_PSTR(sensorid_optional, "[sensor ID]")
MAKE_PSTR(id_optional, "[id|hc]")
MAKE_PSTR(data_optional, "[data]")
MAKE_PSTR(offset_optional, "[offset]")
MAKE_PSTR(length_optional, "[length]")
MAKE_PSTR(typeid_mandatory, "<type ID>")
MAKE_PSTR(deviceid_mandatory, "<device ID>")
MAKE_PSTR(device_type_optional, "[device]")
MAKE_PSTR(invalid_log_level, "Invalid log level")
MAKE_PSTR(log_level_optional, "[level]")
MAKE_PSTR(name_mandatory, "<name>")
MAKE_PSTR(name_optional, "[name]")
MAKE_PSTR(new_password_prompt1, "Enter new password: ")
MAKE_PSTR(new_password_prompt2, "Retype new password: ")
MAKE_PSTR(password_prompt, "Password: ")
MAKE_PSTR(unset, "<unset>")

// command descriptions
MAKE_PSTR(info_cmd, "lists all values")
MAKE_PSTR(commands_cmd, "lists all commands")
MAKE_PSTR(entities_cmd, "lists all entities")

MAKE_PSTR_WORD(number)
MAKE_PSTR_WORD(enum)
MAKE_PSTR_WORD(text)

MAKE_PSTR_WORD(2)
MAKE_PSTR_WORD(4)
MAKE_PSTR_WORD(10)
MAKE_PSTR_WORD(100)
MAKE_PSTR_WORD(60)

MAKE_PSTR_LIST(div2, F_(2))
MAKE_PSTR_LIST(div4, F_(4))
MAKE_PSTR_LIST(div10, F_(10))
MAKE_PSTR_LIST(div60, F_(60))
MAKE_PSTR_LIST(div100, F_(100))
MAKE_PSTR_LIST(mul5, F("-5"))
MAKE_PSTR_LIST(mul10, F("-10"))
MAKE_PSTR_LIST(mul15, F("-15"))

// Unit Of Measurement mapping - maps to DeviceValueUOM_s in emsdevice.cpp
// uom - also used with HA see https://github.com/home-assistant/core/blob/d7ac4bd65379e11461c7ce0893d3533d8d8b8cbf/homeassistant/const.py#L384
MAKE_PSTR(blank, " ")
MAKE_PSTR(percent, "%")
MAKE_PSTR(degrees, "°C")
MAKE_PSTR(kwh, "kWh")
MAKE_PSTR(wh, "Wh")
MAKE_PSTR(bar, "bar")
MAKE_PSTR(minutes, "Minuten")
MAKE_PSTR(hours, "Stunden")
MAKE_PSTR(days, "Tage")
MAKE_PSTR(ua, "uA")
MAKE_PSTR(lmin, "l/min")
MAKE_PSTR(kw, "kW")
MAKE_PSTR(w, "W")
MAKE_PSTR(kb, "KB")
MAKE_PSTR(seconds, "seconds")
MAKE_PSTR(dbm, "dBm")
MAKE_PSTR(fahrenheit, "°F")
MAKE_PSTR(mv, "mV")
MAKE_PSTR(sqm, "sqm")
MAKE_PSTR(m3, "m3")
MAKE_PSTR(l, "l")
// MAKE_PSTR(times, "mal")
// MAKE_PSTR(oclock, "Uhr")

// TAG mapping - maps to DeviceValueTAG_s in emsdevice.cpp
// use empty string if want to suppress showing tags
// mqtt tags must not have spaces
MAKE_PSTR(tag_none, "")
MAKE_PSTR(tag_heartbeat, "")
MAKE_PSTR(tag_boiler_data, "")
MAKE_PSTR(tag_device_data_ww, "Warmwasser")
MAKE_PSTR(tag_thermostat_data, "")
MAKE_PSTR(tag_hc1, "hc1")
MAKE_PSTR(tag_hc2, "hc2")
MAKE_PSTR(tag_hc3, "hc3")
MAKE_PSTR(tag_hc4, "hc4")
MAKE_PSTR(tag_hc5, "hc5")
MAKE_PSTR(tag_hc6, "hc6")
MAKE_PSTR(tag_hc7, "hc7")
MAKE_PSTR(tag_hc8, "hc8")
MAKE_PSTR(tag_wwc1, "wwc1")
MAKE_PSTR(tag_wwc2, "wwc2")
MAKE_PSTR(tag_wwc3, "wwc3")
MAKE_PSTR(tag_wwc4, "wwc4")
MAKE_PSTR(tag_hs1, "hs1")
MAKE_PSTR(tag_hs2, "hs2")
MAKE_PSTR(tag_hs3, "hs3")
MAKE_PSTR(tag_hs4, "hs4")
MAKE_PSTR(tag_hs5, "hs5")
MAKE_PSTR(tag_hs6, "hs6")
MAKE_PSTR(tag_hs7, "hs7")
MAKE_PSTR(tag_hs8, "hs8")
MAKE_PSTR(tag_hs9, "hs9")
MAKE_PSTR(tag_hs10, "hs10")
MAKE_PSTR(tag_hs11, "hs11")
MAKE_PSTR(tag_hs12, "hs12")
MAKE_PSTR(tag_hs13, "hs13")
MAKE_PSTR(tag_hs14, "hs14")
MAKE_PSTR(tag_hs15, "hs15")
MAKE_PSTR(tag_hs16, "hs16")

// MQTT topic names
// MAKE_PSTR(tag_heartbeat_mqtt, "heartbeat")
MAKE_PSTR(tag_boiler_data_mqtt, "")
MAKE_PSTR(tag_device_data_ww_mqtt, "ww")

// boiler
MAKE_PSTR(time, "Zeit")
MAKE_PSTR(date, "Datum")
MAKE_PSTR_WORD(1x3min)
MAKE_PSTR_WORD(2x3min)
MAKE_PSTR_WORD(3x3min)
MAKE_PSTR_WORD(4x3min)
MAKE_PSTR_WORD(5x3min)
MAKE_PSTR_WORD(6x3min)
MAKE_PSTR_(continuos, "kontinuierlich")
MAKE_PSTR(3wayvalve, "3-Wege Ventil")
MAKE_PSTR(chargepump, "Ladepumpe")
MAKE_PSTR(hot, "Heiss")
MAKE_PSTR(eco, "Eco")
MAKE_PSTR(intelligent, "Intelligent")
MAKE_PSTR_(flow, "Fluss")
MAKE_PSTR(manual, "Manuell")
MAKE_PSTR_(buffer, "Speicher")
MAKE_PSTR(bufferedflow, "Durchlaufspeicher")
MAKE_PSTR(layeredbuffer, "Schichtspeicher")
MAKE_PSTR(maintenance, "Wartung")

// boiler lists
MAKE_PSTR_LIST(tpl_date, F("Format: < dd.mm.yyyy >")) // template for text input
MAKE_PSTR_LIST(enum_off_time_date_manual, F_(off), F_(time), F_(date), F_(manual))
MAKE_PSTR_LIST(enum_freq, F_(off), F_(1x3min), F_(2x3min), F_(3x3min), F_(4x3min), F_(5x3min), F_(6x3min), F_(continuous))
MAKE_PSTR_LIST(enum_charge, F_(chargepump), F_(3wayvalve))
MAKE_PSTR_LIST(enum_comfort, F_(hot), F_(eco), F_(intelligent))
MAKE_PSTR_LIST(enum_flow, F_(off), F_(flow), F_(bufferedflow), F_(buffer), F_(layeredbuffer))
MAKE_PSTR_LIST(enum_reset, F("-"), F_(maintenance), F_(error))
// MAKE_PSTR_LIST(enum_bool, F_(off), F_(on))

//heatpump
MAKE_PSTR_LIST(enum_hpactivity, F("Kein"), F("Heizen"), F("Kühlen"), F("Warmwasser"), F("Pool"))

// mixer
MAKE_PSTR_LIST(enum_shunt, F("gestoppt"), F("öffnen"), F("schließen"), F("Offen"), F("Geschlossen"))

// thermostat
MAKE_PSTR(light, "Leicht")
MAKE_PSTR(medium, "Mittel")
MAKE_PSTR(heavy, "Schwer")
MAKE_PSTR(own_prog, "Eigenprog")
MAKE_PSTR(start, "Start")
MAKE_PSTR(heat, "Heizen")
MAKE_PSTR(hold, "Halten")
MAKE_PSTR(cool, "Kühl")
MAKE_PSTR(end, "Ende")
MAKE_PSTR(german, "Deutsch")
MAKE_PSTR(dutch, "Niederländisch")
MAKE_PSTR(french, "Französisch")
MAKE_PSTR(italian, "Italienisch")
MAKE_PSTR(high, "hoch")
MAKE_PSTR(low, "niedrig")
MAKE_PSTR(radiator, "Heizkörper")
MAKE_PSTR(convector, "Konvektor")
MAKE_PSTR(floor, "Fussboden")
MAKE_PSTR(summer, "Sommer")
MAKE_PSTR(winter, "Winter")
MAKE_PSTR(outdoor, "Aussentemperatur")
MAKE_PSTR_WORD(mpc)
MAKE_PSTR(room, "Raum")
MAKE_PSTR(power, "Leistung")
MAKE_PSTR(constant, "konstant")
MAKE_PSTR(simple, "einfach")
MAKE_PSTR(optimized, "optimiert")
MAKE_PSTR(nofrost, "Frostschutz")
MAKE_PSTR(comfort, "Komfort")
MAKE_PSTR(night, "Nacht")
MAKE_PSTR(day, "Tag")
MAKE_PSTR(holiday, "Urlaub")
MAKE_PSTR(reduce, "reduziert")
MAKE_PSTR(noreduce, "unreduziert")
MAKE_PSTR(offset, "Anhebung")
MAKE_PSTR(design, "Auslegung")
MAKE_PSTR_WORD(tempauto)
MAKE_PSTR(minflow, "minfluss")
MAKE_PSTR(maxflow, "maxfluss")
MAKE_PSTR_WORD(rc3x)
MAKE_PSTR_WORD(rc20)

MAKE_PSTR(internal_temperature, "interne Temperatur")
MAKE_PSTR(internal_setpoint, "interner Sollwert")
MAKE_PSTR(external_temperature, "externe Temperatur")
MAKE_PSTR(burner_temperature, "Kesseltemperatur")
MAKE_PSTR(ww_temperature, "Wassertemperatur")
MAKE_PSTR(functioning_mode, "functioning mode")
MAKE_PSTR(smoke_temperature, "Abgastemperatur")

// thermostat lists
MAKE_PSTR_LIST(tpl_datetime, F("Format: < hh:mm:ss dd/mm/yyyy-dw-dst | NTP >"))
MAKE_PSTR_LIST(tpl_switchtime, F("Format: < nn.d.o.hh:mm >"))
MAKE_PSTR_LIST(tpl_holidays, F("Format: < dd.mm.yyyy-dd.mm.yyyy >"))
MAKE_PSTR_LIST(enum_ibaMainDisplay,
               F_(internal_temperature),
               F_(internal_setpoint),
               F_(external_temperature),
               F_(burner_temperature),
               F_(ww_temperature),
               F_(functioning_mode),
               F_(time),
               F_(date),
               F_(smoke_temperature))
MAKE_PSTR_LIST(enum_ibaLanguage, F_(german), F_(dutch), F_(french), F_(italian))
MAKE_PSTR_LIST(enum_ibaLanguage_RC30, F_(german), F_(dutch))
MAKE_PSTR_LIST(enum_floordrystatus, F_(off), F_(start), F_(heat), F_(hold), F_(cool), F_(end))
MAKE_PSTR_LIST(enum_ibaBuildingType, F_(light), F_(medium), F_(heavy)) // RC300
MAKE_PSTR_LIST(enum_PID, F("fast"), F_(medium), F("slow"))
MAKE_PSTR_LIST(enum_wwMode, F_(off), F_(low), F_(high), F_(auto), F_(own_prog))
MAKE_PSTR_LIST(enum_wwCircMode, F_(off), F_(on), F_(auto), F_(own_prog))
MAKE_PSTR_LIST(enum_wwMode2, F_(off), F_(on), F_(auto))
MAKE_PSTR_LIST(enum_wwMode3, F_(on), F_(off), F_(auto))
MAKE_PSTR_LIST(enum_heatingtype, F_(off), F_(radiator), F_(convector), F_(floor))
MAKE_PSTR_LIST(enum_summermode, F_(summer), F_(auto), F_(winter))
MAKE_PSTR_LIST(enum_summer, F_(winter), F_(summer))

MAKE_PSTR_LIST(enum_mode, F_(manual), F_(auto))                      // RC100, RC300, RC310
MAKE_PSTR_LIST(enum_mode2, F_(off), F_(manual), F_(auto))            // RC20
MAKE_PSTR_LIST(enum_mode3, F_(night), F_(day), F_(auto))             // RC35, RC30, RC25
MAKE_PSTR_LIST(enum_mode4, F_(nofrost), F_(eco), F_(heat), F_(auto)) // JUNKERS
MAKE_PSTR_LIST(enum_mode5, F_(auto), F_(off))                        // CRF
MAKE_PSTR_LIST(enum_mode6, F_(nofrost), F_(night), F_(day))          // RC10

MAKE_PSTR_LIST(enum_modetype, F_(eco), F_(comfort))
// MAKE_PSTR_LIST(enum_modetype2, F_(day))
MAKE_PSTR_LIST(enum_modetype3, F_(night), F_(day))
MAKE_PSTR_LIST(enum_modetype4, F_(nofrost), F_(eco), F_(heat))
MAKE_PSTR_LIST(enum_modetype5, F_(off), F_(on))

MAKE_PSTR_LIST(enum_reducemode, F_(nofrost), F_(reduce), F_(room), F_(outdoor))
MAKE_PSTR_LIST(enum_nofrostmode, F_(off), F_(room), F_(outdoor))

MAKE_PSTR_LIST(enum_controlmode, F_(off), F_(optimized), F_(simple), F_(mpc), F_(room), F_(power), F_(constant))
MAKE_PSTR_LIST(enum_controlmode2, F_(outdoor), F_(room))
// MAKE_PSTR_LIST(enum_controlmode3, F_(off), F_(room), F_(outdoor), F("room+outdoor"))
MAKE_PSTR_LIST(enum_control, F_(off), F_(rc20), F_(rc3x))
MAKE_PSTR_LIST(enum_j_control, F_(off), F("fb10"), F("fb110"))

MAKE_PSTR_LIST(enum_wwProgMode, F("std Prog"), F_(own_prog))
MAKE_PSTR_LIST(enum_dayOfWeek, F("Mo"), F("Di"), F("Mi"), F("Do"), F("Fr"), F("Sa"), F("So"), F("Alle"))
MAKE_PSTR_LIST(enum_progMode, F("Prog_1"), F("Prog_2"))
MAKE_PSTR_LIST(enum_progMode2,
               F("Eigen_1"),
               F("Familie"),
               F("Morgends"),
               F("Abends"),
               F("Vormittag"),
               F("Nachmittag"),
               F("Mittag"),
               F("Singles"),
               F("Senioren"),
               F("Neu"),
               F("Eigen_2"))
MAKE_PSTR_LIST(enum_progMode3, F("Familie"), F("Morgends"), F("Abends"), F("Vormittag"), F("Nachmittag"), F("Mittag"), F("Singles"), F("Senioren"))
MAKE_PSTR_LIST(enum_progMode4, F("prog_a"), F("prog_b"), F("prog_c"), F("prog_d"), F("prog_e"), F("prog_f"))

MAKE_PSTR_LIST(enum_switchmode, F_(off), F_(eco), F_(comfort), F_(heat))
MAKE_PSTR_LIST(enum_climate, F("Solltemperature"), F("Raumtemperatur"))

// solar list
MAKE_PSTR_LIST(enum_solarmode, F_(constant), F("pwm"), F("analog"))
MAKE_PSTR_LIST(enum_collectortype, F("flach"), F("vakuum"))
MAKE_PSTR_LIST(enum_cylprio, F("Zyl_1"), F("Zyl_2"))

// id used to store the device ID, goes into MQTT payload
MAKE_PSTR_LIST(ID, F_(id))

// Boiler
// extra commands
MAKE_PSTR_LIST(wwtapactivated, F("wwtapactivated"), F("Aktiviere Warmwasser im Wartungsmodus"))
MAKE_PSTR_LIST(reset, F("reset"), F("Reset"))

// single mqtt topics
MAKE_PSTR_WORD(heating_active)
MAKE_PSTR_WORD(tapwater_active)
MAKE_PSTR_WORD(response)

// mqtt, commands and text
MAKE_PSTR_LIST(heatingActive, F("heatingactive"), F("Heizung aktiv"))
MAKE_PSTR_LIST(tapwaterActive, F("tapwateractive"), F("Warmwasser aktiv"))
MAKE_PSTR_LIST(selFlowTemp, F("selflowtemp"), F("Sollwert Flusstemperatur"))
MAKE_PSTR_LIST(selBurnPow, F("selburnpow"), F("Sollwert Brennerleistung"))
MAKE_PSTR_LIST(heatingPumpMod, F("heatingpumpmod"), F("Heizungspumpe 1 Modulation"))
MAKE_PSTR_LIST(heatingPump2Mod, F("heatingpump2mod"), F("Heizungspumpe 2 Modulation"))
MAKE_PSTR_LIST(outdoorTemp, F("outdoortemp"), F("Aussentemperatur"))
MAKE_PSTR_LIST(curFlowTemp, F("curflowtemp"), F("aktuelle Flusstemperatur"))
MAKE_PSTR_LIST(retTemp, F("rettemp"), F("Rücklauftemperatur"))
MAKE_PSTR_LIST(switchTemp, F("switchtemp"), F("Mischer Schalttemperatur"))
MAKE_PSTR_LIST(sysPress, F("syspress"), F("Systemdruck"))
MAKE_PSTR_LIST(boilTemp, F("boiltemp"), F("Kesseltemperatur"))
MAKE_PSTR_LIST(exhaustTemp, F("exhausttemp"), F("Auslasstemperatur"))
MAKE_PSTR_LIST(burnGas, F("burngas"), F("Gas"))
MAKE_PSTR_LIST(burnGas2, F("burngas2"), F("Gas Stufe 2"))
MAKE_PSTR_LIST(flameCurr, F("flamecurr"), F("Flammstrom"))
MAKE_PSTR_LIST(heatingPump, F("heatingpump"), F("Heizungspumpe"))
MAKE_PSTR_LIST(fanWork, F("fanwork"), F("Gebläse"))
MAKE_PSTR_LIST(ignWork, F("ignwork"), F("Zündung"))
MAKE_PSTR_LIST(oilPreHeat, F("oilpreheat"), F("oil preheating"))
MAKE_PSTR_LIST(heatingActivated, F("heatingactivated"), F("Heizen aktiviert"))
MAKE_PSTR_LIST(heatingTemp, F("heatingtemp"), F("Kesseltemperatur"))
MAKE_PSTR_LIST(pumpModMax, F("pumpmodmax"), F("Kesselpumpen Maximalleistung"))
MAKE_PSTR_LIST(pumpModMin, F("pumpmodmin"), F("Kesselpumpen Minmalleistung"))
MAKE_PSTR_LIST(pumpDelay, F("pumpdelay"), F("Pumpennachlauf"))
MAKE_PSTR_LIST(burnMinPeriod, F("burnminperiod"), F("Antipendelzeit"))
MAKE_PSTR_LIST(burnMinPower, F("burnminpower"), F("minimale Brennerleistung"))
MAKE_PSTR_LIST(burnMaxPower, F("burnmaxpower"), F("maximale Brennerleistung"))
MAKE_PSTR_LIST(boilHystOn, F("boilhyston"), F("Hysterese ein temperatur"))
MAKE_PSTR_LIST(boilHystOff, F("boilhystoff"), F("Hysterese aus temperatur"))
MAKE_PSTR_LIST(setFlowTemp, F("setflowtemp"), F("Sollwert Flusstemperatur"))
MAKE_PSTR_LIST(setBurnPow, F("setburnpow"), F("Sollwert Brennerleistung"))
MAKE_PSTR_LIST(curBurnPow, F("curburnpow"), F("Brennerleistung"))
MAKE_PSTR_LIST(burnStarts, F("burnstarts"), F("Brenner # starts"))
MAKE_PSTR_LIST(burnWorkMin, F("burnworkmin"), F("Brenner Laufzeit"))
MAKE_PSTR_LIST(burn2WorkMin, F("burn2workmin"), F("Brenner Stufe 2 Laufzeit"))
MAKE_PSTR_LIST(heatWorkMin, F("heatworkmin"), F("Heizung Laufzeit"))
MAKE_PSTR_LIST(UBAuptime, F("ubauptime"), F("gesamte Laufzeit"))
MAKE_PSTR_LIST(lastCode, F("lastcode"), F("Fehlerspeicher"))
MAKE_PSTR_LIST(serviceCode, F("servicecode"), F("Statusmeldung"))
MAKE_PSTR_LIST(serviceCodeNumber, F("servicecodenumber"), F("Statusmeldungsnummer"))
MAKE_PSTR_LIST(maintenanceMessage, F("maintenancemessage"), F("Wartungsmeldung"))
MAKE_PSTR_LIST(maintenanceDate, F("maintenancedate"), F("Wartungsdatum"))
MAKE_PSTR_LIST(maintenanceType, F_(maintenance), F("Wartungsplan"))
MAKE_PSTR_LIST(maintenanceTime, F("maintenancetime"), F("Wartung in"))

// heatpump/compress specific
MAKE_PSTR_LIST(upTimeControl, F("uptimecontrol"), F("Betriebszeit total heizen"))
MAKE_PSTR_LIST(upTimeCompHeating, F("uptimecompheating"), F("Betriebszeit Kompressor heizen"))
MAKE_PSTR_LIST(upTimeCompCooling, F("uptimecompcooling"), F("Betriebszeit Kompressor kühlen"))
MAKE_PSTR_LIST(upTimeCompWw, F("uptimecompww"), F("Betriebszeit Kompressor"))
MAKE_PSTR_LIST(upTimeCompPool, F("uptimecomppool"), F("Betriebszeit Kompressor Pool"))
MAKE_PSTR_LIST(totalCompStarts, F("totalcompstarts"), F("gesamt Kompressor Starts"))
MAKE_PSTR_LIST(heatingStarts, F("heatingstarts"), F("Heizen Starts"))
MAKE_PSTR_LIST(coolingStarts, F("coolingstarts"), F("Kühlen Starts"))
MAKE_PSTR_LIST(poolStarts, F("poolstarts"), F("Pool Starts"))
MAKE_PSTR_LIST(nrgConsTotal, F("nrgconstotal"), F("totaler Energieverbrauch"))
MAKE_PSTR_LIST(nrgConsCompTotal, F("nrgconscomptotal"), F("Energieverbrauch Kompressor total"))
MAKE_PSTR_LIST(nrgConsCompHeating, F("nrgconscompheating"), F("Energieverbrauch Kompressor heizen"))
MAKE_PSTR_LIST(nrgConsCompWw, F("nrgconscompww"), F("Energieverbrauch Kompressor"))
MAKE_PSTR_LIST(nrgConsCompCooling, F("nrgconscompcooling"), F("Energieverbrauch Kompressor kühlen"))
MAKE_PSTR_LIST(nrgConsCompPool, F("nrgconscomppool"), F("Energieverbrauch Kompressor Pool"))
MAKE_PSTR_LIST(nrgSuppTotal, F("nrgsupptotal"), F("gesamte Energieabgabe"))
MAKE_PSTR_LIST(nrgSuppHeating, F("nrgsuppheating"), F("gesamte Energieabgabe heizen"))
MAKE_PSTR_LIST(nrgSuppWw, F("nrgsuppww"), F("gesamte Energieabgabe"))
MAKE_PSTR_LIST(nrgSuppCooling, F("nrgsuppcooling"), F("gesamte Energieabgabe kühlen"))
MAKE_PSTR_LIST(nrgSuppPool, F("nrgsupppool"), F("gesamte Energieabgabe Pool"))
MAKE_PSTR_LIST(auxElecHeatNrgConsTotal, F("auxelecheatnrgconstotal"), F("Energieverbrauch el. Zusatzheizung"))
MAKE_PSTR_LIST(auxElecHeatNrgConsHeating, F("auxelecheatnrgconsheating"), F("Energieverbrauch el. Zusatzheizung Heizen"))
MAKE_PSTR_LIST(auxElecHeatNrgConsWW, F("auxelecheatnrgconsww"), F("Energieverbrauch el. Zusatzheizung"))
MAKE_PSTR_LIST(auxElecHeatNrgConsPool, F("auxelecheatnrgconspool"), F("Energieverbrauch el. Zusatzheizung Pool"))

MAKE_PSTR_LIST(hpPower, F("hppower"), F("Leistung Wärmepumpe"))
MAKE_PSTR_LIST(hpCompOn, F("hpcompon"), F("HP Compressor"))
MAKE_PSTR_LIST(hpHeatingOn, F("hpheatingon"), F("HP Heating"))
MAKE_PSTR_LIST(hpCoolingOn, F("hpcoolingon"), F("HP Cooling"))
MAKE_PSTR_LIST(hpWwOn, F("hpwwon"), F("HP dhw"))
MAKE_PSTR_LIST(hpPoolOn, F("hppoolon"), F("HP Pool"))
MAKE_PSTR_LIST(hpBrinePumpSpd, F("hpbrinepumpspd"), F("Brine Pump Speed"))
MAKE_PSTR_LIST(hpCompSpd, F("hpcompspd"), F("Compressor Speed"))
MAKE_PSTR_LIST(hpCircSpd, F("hpcircspd"), F("Circulation pump Speed"))
MAKE_PSTR_LIST(hpBrineIn, F("hpbrinein"), F("Brine in/Evaporator"))
MAKE_PSTR_LIST(hpBrineOut, F("hpbrineout"), F("Brine out/Condenser"))
MAKE_PSTR_LIST(hpSuctionGas, F("hpsuctiongas"), F("Suction gas"))
MAKE_PSTR_LIST(hpHotGas, F("hphotgas"), F("Hot gas/Compressed"))
MAKE_PSTR_LIST(hpSwitchValve, F("hpswitchvalve"), F("Switch Valve"))
MAKE_PSTR_LIST(hpActivity, F("hpactivity"), F("Compressor Activity"))
MAKE_PSTR_LIST(hpTc0, F("hptc0"), F("Wärmeträgerflüssigkeit Eingang (TC0)"))
MAKE_PSTR_LIST(hpTc1, F("hptc1"), F("Wärmeträgerflüssigkeit Ausgang (TC1)"))
MAKE_PSTR_LIST(hpTc3, F("hptc3"), F("Verflüssigertemperatur (TC3)"))
MAKE_PSTR_LIST(hpTr3, F("hptr3"), F(" Temperaturfühler Kältemittel (Flüssigkeit)  (TR3)"))
MAKE_PSTR_LIST(hpTr4, F("hptr4"), F("Verdampfer Eintritt (TR4)"))
MAKE_PSTR_LIST(hpTr5, F("hptr5"), F("Temperaturfühler Kompessoransaugleitung (TR5)"))
MAKE_PSTR_LIST(hpTr6, F("hptr6"), F("Temperaturfühler Kompressorausgangsleitung (TR6)"))
MAKE_PSTR_LIST(hpTr7, F("hptr7"), F("Temperaturfühler Kältemittel (Gas) (TR7)"))
MAKE_PSTR_LIST(hpTl2, F("hptl2"), F("Außenlufttemperaturfühler (TL2)"))
MAKE_PSTR_LIST(hpPl1, F("hppl1"), F("Niedrigdruckfühler (PL1)"))
MAKE_PSTR_LIST(hpPh1, F("hpph1"), F("Hochdruckfühler (PH1)"))

// the following are dhw for the boiler and automatically tagged with 'ww'
MAKE_PSTR_LIST(wWSelTemp, F("wwseltemp"), F("gewählte Temperatur"))
MAKE_PSTR_LIST(wwSelTempLow, F("wwseltemplow"), F("selected lower temperature"))
MAKE_PSTR_LIST(wwSelTempOff, F("wwseltempoff"), F("selected temperature for off"))
MAKE_PSTR_LIST(wwSelTempSingle, F("wwseltempsingle"), F("single charge temperature"))
MAKE_PSTR_LIST(wWSetTemp, F("wwsettemp"), F("Solltemperatur"))
MAKE_PSTR_LIST(wWType, F("wwtype"), F("Typ"))
MAKE_PSTR_LIST(wWComfort, F("wwcomfort"), F("Komfort"))
MAKE_PSTR_LIST(wWFlowTempOffset, F("wwflowtempoffset"), F("Flusstemperaturanhebung"))
MAKE_PSTR_LIST(wWMaxPower, F("wwmaxpower"), F("max Leistung"))
MAKE_PSTR_LIST(wWCircPump, F("wwcircpump"), F("Zirkulationspumpe vorhanden"))
MAKE_PSTR_LIST(wWChargeType, F("wwchargetype"), F("Ladungstyp"))
MAKE_PSTR_LIST(wWDisinfectionTemp, F("wwdisinfectiontemp"), F("Desinfectionstemperatur"))
MAKE_PSTR_LIST(wWCircMode, F("wwcircmode"), F("Zirkulationspumpenfrequenz"))
MAKE_PSTR_LIST(wWCirc, F("wwcirc"), F("Zirkulation aktiv"))
MAKE_PSTR_LIST(wWCurTemp, F("wwcurtemp"), F("aktuelle Warmwasser Temperatur intern"))
MAKE_PSTR_LIST(wWCurTemp2, F("wwcurtemp2"), F("aktuelle Warmwaser Temperatur extern"))
MAKE_PSTR_LIST(wWCurFlow, F("wwcurflow"), F("aktueller Durchfluss"))
MAKE_PSTR_LIST(wWStorageTemp1, F("wwstoragetemp1"), F("interne Speichertemperature"))
MAKE_PSTR_LIST(wWStorageTemp2, F("wwstoragetemp2"), F("externer Speichertemperatur"))
MAKE_PSTR_LIST(wWActivated, F("wwactivated"), F("aktiviert"))
MAKE_PSTR_LIST(wWOneTime, F("wwonetime"), F("Einmalladung"))
MAKE_PSTR_LIST(wWDisinfecting, F("wwdisinfect"), F("Desinfizieren"))
MAKE_PSTR_LIST(wWCharging, F("wwcharging"), F("Laden"))
MAKE_PSTR_LIST(wWRecharging, F("wwrecharging"), F("Nachladen"))
MAKE_PSTR_LIST(wWTempOK, F("wwtempok"), F("Temperatur ok"))
MAKE_PSTR_LIST(wWActive, F("wwactive"), F("aktiv"))
MAKE_PSTR_LIST(ww3wayValve, F("ww3wayvalve"), F("3way valve active"))
MAKE_PSTR_LIST(wWSetPumpPower, F("wwsetpumppower"), F("Soll Pumpenleistung"))
MAKE_PSTR_LIST(mixerTemp, F("mixertemp"), F("Mischertemperatur"))
MAKE_PSTR_LIST(wwCylMiddleTemp, F("wwcylmiddletemp"), F("cylinder middle temperature (TS3)"))
MAKE_PSTR_LIST(wWStarts, F("wwstarts"), F("Anzahl starts"))
MAKE_PSTR_LIST(wWStarts2, F("wwstarts2"), F("Kreis 2 Anzahl Starts"))
MAKE_PSTR_LIST(wWWorkM, F("wwworkm"), F("aktive Zeit"))
MAKE_PSTR_LIST(wWHystOn, F("wwhyston"), F("Hysterese Einschalttemperatur"))
MAKE_PSTR_LIST(wWHystOff, F("wwhystoff"), F("Hysterese Ausschalttemperatur"))
MAKE_PSTR_LIST(wwProgMode, F("wwprogmode"), F("Programmmodus"))
MAKE_PSTR_LIST(wwCircProg, F("wwcircprog"), F("Zirkulationsprogramm"))
MAKE_PSTR_LIST(wwMaxTemp, F("wwmaxtemp"), F("Maximale Temperatur"))
MAKE_PSTR_LIST(wwOneTimeKey, F("wwonetimekey"), F("Einmalladungstaste"))

// mqtt values / commands
MAKE_PSTR_LIST(switchtime1, F("switchtime1"), F("own1 program switchtime"))
MAKE_PSTR_LIST(switchtime2, F("switchtime2"), F("own2 program switchtime"))
MAKE_PSTR_LIST(wwswitchtime, F("wwswitchtime"), F("program switchtime"))
MAKE_PSTR_LIST(wwcircswitchtime, F("wwcircswitchtime"), F("circulation program switchtime"))
MAKE_PSTR_LIST(dateTime, F("datetime"), F("Datum/Zeit"))
MAKE_PSTR_LIST(errorCode, F("errorcode"), F("Fehlermeldung"))
MAKE_PSTR_LIST(ibaMainDisplay, F("display"), F("Anzeige"))
MAKE_PSTR_LIST(ibaLanguage, F("language"), F("Sprache"))
MAKE_PSTR_LIST(ibaClockOffset, F("clockoffset"), F("Uhrkorrektur"))
MAKE_PSTR_LIST(ibaBuildingType, F("building"), F("Gebäude"))
MAKE_PSTR_LIST(heatingPID, F("heatingpid"), F("heating PID"))
MAKE_PSTR_LIST(ibaCalIntTemperature, F("intoffset"), F("Korrektur interner Temperatur"))
MAKE_PSTR_LIST(ibaMinExtTemperature, F("minexttemp"), F("min Aussentemperatur"))
MAKE_PSTR_LIST(backlight, F("backlight"), F("key backlight"))
MAKE_PSTR_LIST(damping, F("damping"), F("Dämpfung der Außentemperatur"))
MAKE_PSTR_LIST(tempsensor1, F("inttemp1"), F("Temperatursensor 1"))
MAKE_PSTR_LIST(tempsensor2, F("inttemp2"), F("Temperatursensor 2"))
MAKE_PSTR_LIST(dampedoutdoortemp, F("dampedoutdoortemp"), F("gedämpfte Aussentemperatur"))
MAKE_PSTR_LIST(floordrystatus, F("floordry"), F("Estrichtrocknung"))
MAKE_PSTR_LIST(floordrytemp, F("floordrytemp"), F("Estrichtrocknungs Temperatur"))
MAKE_PSTR_LIST(brightness, F("brightness"), F("bildschirmhelligkeit"))
MAKE_PSTR_LIST(autodst, F("autodst"), F("automatische sommerzeit umstellung"))
MAKE_PSTR_LIST(preheating, F("preheating"), F("vorheizen im uhrenprogramm"))
MAKE_PSTR_LIST(offtemp, F("offtemp"), F("temperatur bei ausgeschaltetem modus"))
MAKE_PSTR_LIST(mixingvalves, F("mixingvalves"), F("mischventile"))
// thermostat ww
MAKE_PSTR_LIST(wwMode, F("wwmode"), F("modus"))
MAKE_PSTR_LIST(wwSetTempLow, F("wwsettemplow"), F("untere Solltemperatur"))
MAKE_PSTR_LIST(wwCharge, F("wwcharge"), F("charge"))
MAKE_PSTR_LIST(wwChargeDuration, F("wwchargeduration"), F("charge duration"))
MAKE_PSTR_LIST(wwDisinfect, F("wwdisinfect"), F("disinfection"))
MAKE_PSTR_LIST(wwDisinfectDay, F("wwdisinfectday"), F("disinfection day"))
MAKE_PSTR_LIST(wwDisinfectHour, F("wwdisinfecthour"), F("disinfection hour"))
MAKE_PSTR_LIST(wwDisinfectTime, F("wwdisinfecttime"), F("disinfection time"))
MAKE_PSTR_LIST(wwExtra1, F("wwextra1"), F("Kreis 1 Extra"))
MAKE_PSTR_LIST(wwExtra2, F("wwextra2"), F("Kreis 2 Extra"))
MAKE_PSTR_LIST(wwDailyHeating, F("wwdailyheating"), F("daily heating"))
MAKE_PSTR_LIST(wwDailyHeatTime, F("wwdailyheattime"), F("daily heating time"))
// thermostat hc
MAKE_PSTR_LIST(climate, F("climate"))
MAKE_PSTR_LIST(selRoomTemp, F("seltemp"), F("Sollwert Raumtemperatur"))
MAKE_PSTR_LIST(roomTemp, F("currtemp"), F("aktuelle Raumtemperatur"))
MAKE_PSTR_LIST(mode, F("mode"), F("modus"))
MAKE_PSTR_LIST(modetype, F("modetype"), F("modus Typ"))
MAKE_PSTR_LIST(fastheatup, F("fastheatup"), F("fast heatup"))
MAKE_PSTR_LIST(daytemp, F("daytemp"), F("Tagestemperatur"))
MAKE_PSTR_LIST(daylowtemp, F("daytemp2"), F("Tagestemperatur T2"))
MAKE_PSTR_LIST(daymidtemp, F("daytemp3"), F("Tagestemperatur T3"))
MAKE_PSTR_LIST(dayhightemp, F("daytemp4"), F("Tagestemperatur T4"))
MAKE_PSTR_LIST(heattemp, F("heattemp"), F("Heizen Temperatur"))
MAKE_PSTR_LIST(nighttemp, F("nighttemp"), F("Nachttemperatur"))
MAKE_PSTR_LIST(ecotemp, F("ecotemp"), F("eco Temperatur"))
MAKE_PSTR_LIST(manualtemp, F("manualtemp"), F("manuelle Temperatur"))
MAKE_PSTR_LIST(tempautotemp, F("tempautotemp"), F("zwischenzeitliche Solltemperatur"))
MAKE_PSTR_LIST(comforttemp, F("comforttemp"), F("Komforttemperatur"))
MAKE_PSTR_LIST(summertemp, F("summertemp"), F("Sommertemperatur"))
MAKE_PSTR_LIST(designtemp, F("designtemp"), F("design-Temperatur"))
MAKE_PSTR_LIST(offsettemp, F("offsettemp"), F("Temperaturanhebung"))
MAKE_PSTR_LIST(minflowtemp, F("minflowtemp"), F("min Flusstemperatur"))
MAKE_PSTR_LIST(maxflowtemp, F("maxflowtemp"), F("max Flusstemperatur"))
MAKE_PSTR_LIST(roominfluence, F("roominfluence"), F("Raumeinfluss"))
MAKE_PSTR_LIST(roominfl_factor, F("roominflfactor"), F("Raumeinfluss Factor"))
MAKE_PSTR_LIST(curroominfl, F("curroominfl"), F("aktueller Raumeinfluss"))
MAKE_PSTR_LIST(nofrosttemp, F("nofrosttemp"), F("Frostschutztemperatur"))
MAKE_PSTR_LIST(targetflowtemp, F("targetflowtemp"), F("berechnete Flusstemperatur"))
MAKE_PSTR_LIST(heatingtype, F("heatingtype"), F("Heizungstyp"))
MAKE_PSTR_LIST(summersetmode, F("summersetmode"), F("Einstellung Sommerbetrieb"))
MAKE_PSTR_LIST(controlmode, F("controlmode"), F("Kontrollmodus"))
MAKE_PSTR_LIST(control, F("control"), F("Fernsteuerung"))
MAKE_PSTR_LIST(holidays, F("holidays"), F("holiday dates"))
MAKE_PSTR_LIST(vacations, F("vacations"), F("vacation dates"))
MAKE_PSTR_LIST(program, F("program"), F("Programm"))
MAKE_PSTR_LIST(pause, F("pause"), F("Pausenzeit"))
MAKE_PSTR_LIST(party, F("party"), F("Partyzeit"))
MAKE_PSTR_LIST(wwprio, F("wwprio"), F("dhw priority"))
MAKE_PSTR_LIST(holidaytemp, F("holidaytemp"), F("Urlaubstemperatur"))
MAKE_PSTR_LIST(summermode, F("summermode"), F("Sommerbetrieb"))
MAKE_PSTR_LIST(holidaymode, F("holidaymode"), F("Urlaubsbetrieb"))
MAKE_PSTR_LIST(flowtempoffset, F("flowtempoffset"), F("Flusstemperaturanhebung"))
MAKE_PSTR_LIST(reducemode, F("reducemode"), F("Absenkmodus"))
MAKE_PSTR_LIST(noreducetemp, F("noreducetemp"), F("Absenkung unterbrechen unter Temperatur"))
MAKE_PSTR_LIST(reducetemp, F("reducetemp"), F("Absenkmodus unter Temperatur"))
MAKE_PSTR_LIST(vacreducetemp, F("vacreducetemp"), F("Urlaub Absenkmodus unter Temperatur"))
MAKE_PSTR_LIST(vacreducemode, F("vacreducemode"), F("Urlaub Absenkmodus"))
MAKE_PSTR_LIST(nofrostmode, F("nofrostmode"), F("Frostschutz Modus"))
MAKE_PSTR_LIST(remotetemp, F("remotetemp"), F("Raumtemperatur der Fernsteuerung"))
MAKE_PSTR_LIST(reducehours, F("reducehours"), F("duration for nighttemp"))
MAKE_PSTR_LIST(reduceminutes, F("reduceminutes"), F("remaining time for nightmode"))

// heatpump
MAKE_PSTR_LIST(airHumidity, F("airhumidity"), F("relative Luftfeuchte"))
MAKE_PSTR_LIST(dewTemperature, F("dewtemperature"), F("Taupunkttemperatur"))

// mixer
MAKE_PSTR_LIST(flowSetTemp, F("flowsettemp"), F("Sollwert Flusstemperatur"))
MAKE_PSTR_LIST(flowTempHc, F("flowtemphc"), F("Flusstemperatur des hk (TC1)"))
MAKE_PSTR_LIST(pumpStatus, F("pumpstatus"), F("Pumpenstatus des hk (PC1)"))
MAKE_PSTR_LIST(mixerStatus, F("valvestatus"), F("Mischerventil Position (VC1)"))
MAKE_PSTR_LIST(flowTempVf, F("flowtempvf"), F("Flusstemperatur am Kessel (T0/Vf)"))
MAKE_PSTR_LIST(mixerSetTime, F("valvesettime"), F("time to set valve"))
// mixer prefixed with wwc
MAKE_PSTR_LIST(wwPumpStatus, F("pumpstatus"), F("Pumpenstatus des wwk (PC1)"))
MAKE_PSTR_LIST(wwTempStatus, F("tempstatus"), F("Temperaturschalter des wwk (MC1)"))
MAKE_PSTR_LIST(wwTemp, F("wwtemp"), F("aktuelle Temperatur"))
// mixer pool
MAKE_PSTR_LIST(poolSetTemp, F("poolsettemp"), F("pool set temperature"))
MAKE_PSTR_LIST(poolTemp, F("pooltemp"), F("pool temperature"))
MAKE_PSTR_LIST(poolShuntStatus, F("poolshuntstatus"), F("pool shunt status opening/closing"))
MAKE_PSTR_LIST(poolShunt, F("poolshunt"), F("pool shunt open/close (0% = pool / 100% = heat)"))

// solar
MAKE_PSTR_LIST(collectorTemp, F("collectortemp"), F("Kollektortemperatur (TS1)"))
MAKE_PSTR_LIST(collector2Temp, F("collector2temp"), F("collector 2 temperature (TS7)"))
MAKE_PSTR_LIST(cylBottomTemp, F("cylbottomtemp"), F("Speicher Bodentemperatur (TS2)"))
MAKE_PSTR_LIST(cyl2BottomTemp, F("cyl2bottomtemp"), F("2. Speicher Bodentemperatur (TS5)"))
MAKE_PSTR_LIST(heatExchangerTemp, F("heatexchangertemp"), F("wärmetauscher Temperatur (TS6)"))
MAKE_PSTR_LIST(cylMiddleTemp, F("cylmiddletemp"), F("cylinder middle temperature (TS3)"))
MAKE_PSTR_LIST(retHeatAssist, F("retheatassist"), F("return temperature heat assistance (TS4)"))
// correct name for M1? value not found, try this:
MAKE_PSTR_LIST(m1Valve, F("heatassistvalve"), F("heat assistance valve (M1)"))
MAKE_PSTR_LIST(m1Power, F("heatassistpower"), F("heat assistance valve power (M1)"))
MAKE_PSTR_LIST(collectorMaxTemp, F("collectormaxtemp"), F("maximale Kollektortemperatur"))
MAKE_PSTR_LIST(collectorMinTemp, F("collectormintemp"), F("minimale Kollektortemperatur"))
MAKE_PSTR_LIST(cylMaxTemp, F("cylmaxtemp"), F("maximale Speichertemperatur"))
// MAKE_PSTR_LIST(cyl2MaxTemp, F("cyl2maxtemp"), F("maximum cylinder 2 temperature"))
MAKE_PSTR_LIST(solarPumpMod, F("solarpumpmod"), F("Pumpenmodulation (PS1)"))
MAKE_PSTR_LIST(cylPumpMod, F("cylpumpmod"), F("Speicherpumpenmodulation (PS5)"))
MAKE_PSTR_LIST(solarPump, F("solarpump"), F("Pumpe (PS1)"))
MAKE_PSTR_LIST(solarPump2, F("solarpump2"), F("pump 2 (PS4)"))
MAKE_PSTR_LIST(solarPump2Mod, F("solarpump2mod"), F("pump 2 modulation (PS4)"))
MAKE_PSTR_LIST(valveStatus, F("valvestatus"), F("ventilstatus"))
MAKE_PSTR_LIST(cylHeated, F("cylheated"), F("Speichertemperatur erreicht"))
MAKE_PSTR_LIST(collectorShutdown, F("collectorshutdown"), F("Kollektorabschaltung"))
MAKE_PSTR_LIST(pumpWorkTime, F("pumpworktime"), F("Pumpenlaufzeit"))
MAKE_PSTR_LIST(pump2WorkTime, F("pump2worktime"), F("Pumpe 2 Laufzeit"))
MAKE_PSTR_LIST(m1WorkTime, F("m1worktime"), F("Differenzregelung Arbeitszeit"))
MAKE_PSTR_LIST(energyLastHour, F("energylasthour"), F("Energie letzte Std"))
MAKE_PSTR_LIST(energyTotal, F("energytotal"), F("Gesamtenergie"))
MAKE_PSTR_LIST(energyToday, F("energytoday"), F("Energie heute"))
MAKE_PSTR_LIST(pumpMinMod, F("pumpminmod"), F("minimum pump modulation"))
MAKE_PSTR_LIST(maxFlow, F("maxflow"), F("maximum solar flow"))
MAKE_PSTR_LIST(solarPower, F("solarpower"), F("actual solar power"))
MAKE_PSTR_LIST(solarPumpTurnonDiff, F("turnondiff"), F("pump turn on difference"))
MAKE_PSTR_LIST(solarPumpTurnoffDiff, F("turnoffdiff"), F("pump turn off difference"))
MAKE_PSTR_LIST(pump2MinMod, F("pump2minmod"), F("minimum pump 2 modulation"))
MAKE_PSTR_LIST(solarPump2TurnonDiff, F("turnondiff2"), F("pump 2 turn on difference"))
MAKE_PSTR_LIST(solarPump2TurnoffDiff, F("turnoffdiff2"), F("pump 2 turn off difference"))

// solar ww
MAKE_PSTR_LIST(wwTemp1, F("wwtemp1"), F("Temperatur 1"))
MAKE_PSTR_LIST(wwTemp3, F("wwtemp3"), F("Temperatur 3"))
MAKE_PSTR_LIST(wwTemp4, F("wwtemp4"), F("Temperatur 4"))
MAKE_PSTR_LIST(wwTemp5, F("wwtemp5"), F("Temperatur 5"))
MAKE_PSTR_LIST(wwTemp7, F("wwtemp7"), F("Temperatur 7"))
MAKE_PSTR_LIST(wwPump, F("wwpump"), F("Pumpe"))
// solar ww and mixer wwc
MAKE_PSTR_LIST(wwMinTemp, F("wwmintemp"), F("minimale Temperatur"))
MAKE_PSTR_LIST(wwRedTemp, F("wwredtemp"), F("redizierte Temperatur"))
MAKE_PSTR_LIST(wwDailyTemp, F("wwdailytemp"), F("tägl. Temperatur"))
MAKE_PSTR_LIST(wwKeepWarm, F("wwkeepwarm"), F("Warmhalten"))
MAKE_PSTR_LIST(wwStatus2, F("wwstatus2"), F("Status 2"))
MAKE_PSTR_LIST(enum_wwStatus2, F(""), F(""), F(""), F("no_heat"), F(""), F(""), F("heatrequest"), F(""), F("disinfecting"), F("hold"))
MAKE_PSTR_LIST(wwPumpMod, F("wwpumpmod"), F("Pumpen Modulation"))
MAKE_PSTR_LIST(wwFlow, F("wwflow"), F("Flussrate"))
// extra mixer ww
MAKE_PSTR_LIST(wwRequiredTemp, F("wwrequiredtemp"), F("benötigte Temperatur"))
MAKE_PSTR_LIST(wwDiffTemp, F("wwdifftemp"), F("Start Differential Temperatur"))

//SM100
MAKE_PSTR_LIST(heatTransferSystem, F("heattransfersystem"), F("Wärmetransfer System"))
MAKE_PSTR_LIST(externalCyl, F("externalcyl"), F("Externer Speicher"))
MAKE_PSTR_LIST(thermalDisinfect, F("thermaldisinfect"), F("Thermische Desinfektion"))
MAKE_PSTR_LIST(heatMetering, F("heatmetering"), F("Wärmemessung"))
MAKE_PSTR_LIST(solarIsEnabled, F("solarenabled"), F("Solarmodul aktiviert"))

// telegram 0x035A
MAKE_PSTR_LIST(solarPumpMode, F("solarpumpmode"), F("solar Pumpen Einst."))
MAKE_PSTR_LIST(solarPumpKick, F("pumpkick"), F("pumpkick"))
MAKE_PSTR_LIST(plainWaterMode, F("plainwatermode"), F("plain water mode"))
MAKE_PSTR_LIST(doubleMatchFlow, F("doublematchflow"), F("doublematchflow"))
MAKE_PSTR_LIST(solarPump2Mode, F("pump2mode"), F("pump 2 mode"))
MAKE_PSTR_LIST(solarPump2Kick, F("pump2kick"), F("pumpkick 2"))

// telegram 0x035F
MAKE_PSTR_LIST(cylPriority, F("cylpriority"), F("Speicher Priorität"))

// telegram 0x380
MAKE_PSTR_LIST(climateZone, F("climatezone"), F("climate zone"))
MAKE_PSTR_LIST(collector1Area, F("collector1area"), F("Kollektor 1 Fläche"))
MAKE_PSTR_LIST(collector1Type, F("collector1type"), F("Kollektor 1 Type"))
MAKE_PSTR_LIST(collector2Area, F("collector2area"), F("Kollektor 2 Fläche"))
MAKE_PSTR_LIST(collector2Type, F("collector2type"), F("Kollektor 2 Type"))

// telegram 0x0363 heatCounter
MAKE_PSTR_LIST(heatCntFlowTemp, F("heatcntflowtemp"), F("Wärmezähler Fluss-Temperatur"))
MAKE_PSTR_LIST(heatCntRetTemp, F("heatcntrettemp"), F("Wärmezähler Rückfluss-Temperatur"))
MAKE_PSTR_LIST(heatCnt, F("heatcnt"), F("Wärmezäler Impulse"))
MAKE_PSTR_LIST(swapFlowTemp, F("swapflowtemp"), F("Austausch Fluss-Temperatur (TS14)"))
MAKE_PSTR_LIST(swapRetTemp, F("swaprettemp"), F("Austausch Rückfluss-Temperatur (TS15)"))

// switch
MAKE_PSTR_LIST(activated, F("activated"), F("aktiviert"))
MAKE_PSTR_LIST(status, F("status"), F("Status"))

// unknown fields to track (SM10)
MAKE_PSTR_LIST(data11, F("data11"), F("unknown datafield 11"))
MAKE_PSTR_LIST(data12, F("data12"), F("unknown datafield 12"))
MAKE_PSTR_LIST(data8, F("data8"), F("unknown datafield 8"))
MAKE_PSTR_LIST(data0, F("data0"), F("unknown datafield 0"))
MAKE_PSTR_LIST(data1, F("data1"), F("unknown datafield 1"))
MAKE_PSTR_LIST(setting3, F("setting3"), F("unknown setting 3"))
MAKE_PSTR_LIST(setting4, F("setting4"), F("unknown setting 4"))

// RF sensor, id 0x40, telegram 0x435
MAKE_PSTR_LIST(RFTemp, F("rftemp"), F("RF Raumtemperatur Sensor"));
